#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58228);

#define public_6f4c944 _public_6f4c944
#define public_6f4c971 _public_6f4c971

PROC_DECLARE(0x6f4c8b0, internal_6f4c8b0, public_6f4c8b0);
extern "C" NAKED register_t __cdecl internal_6f4c8b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x54
        mov eax, dword ptr ds : [public_6f61e28]
        lea ecx, ds:[eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x14], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov edx, dword ptr ds : [eax+0x18]
        push esi
        mov dword ptr ss : [ebp-0xC], ecx
        mov dword ptr ss : [ebp-8], edx
        lea edx, ss:[ebp-0x54]
        lea ecx, ss:[ebp-0x54]
        push 0
        push edx
        mov dword ptr ds : [eax+0x18], ecx
        call public_6f58228
        add esp, 8
        test eax, eax
        mov eax, dword ptr ds : [public_6f61e28]
        jne public_6f4c944
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax+0xC]
        sub ecx, edx
        sar ecx, 4
        sub ecx, esi
        dec ecx
        push 0xFF
        push ecx
        call public_6f4c540
        mov edx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [edx+0x10], esi
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        sar ecx, 4
        sub ecx, esi
        mov dword ptr ds : [eax+0x14], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0x14]
        add esp, 8
        add edx, esi
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ss : [ebp-4], 0
        jmp public_6f4c971
        public_6f4c944 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x10]
        add eax, 0xC
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax+4]
        shl edx, 4
        add edx, ecx
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [ebp-4], 1
        public_6f4c971 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ss : [ebp-4]
        pop esi
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f4c8b0)
    }
}

#undef public_6f4c944
#undef public_6f4c971
