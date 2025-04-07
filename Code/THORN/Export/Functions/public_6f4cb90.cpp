#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52650);
CLANG_FORWARD_PROC_SYMBOL(public_6f54e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f58228);

#define public_6f4cbec _public_6f4cbec
#define public_6f4cc04 _public_6f4cc04
#define public_6f4cc3e _public_6f4cc3e
#define public_6f4cc59 _public_6f4cc59
#define public_6f4cc69 _public_6f4cc69

PROC_DECLARE(0x6f4cb90, internal_6f4cb90, public_6f4cb90);
extern "C" NAKED register_t __cdecl internal_6f4cb90()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        mov eax, dword ptr ds : [public_6f61e28]
        lea ecx, ds:[eax+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x18], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x14], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0x10], ecx
        mov dword ptr ss : [ebp-0xC], edx
        lea edx, ss:[ebp-0x58]
        lea ecx, ss:[ebp-0x58]
        push 0
        push edx
        mov dword ptr ds : [eax+0x18], ecx
        call public_6f58228
        add esp, 8
        test eax, eax
        jne public_6f4cc04
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6f4cbec
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6f54e30
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-8], 0
        jmp public_6f4cc3e
        public_6f4cbec : nop
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call public_6f52650
        add esp, 4
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-8], 0
        jmp public_6f4cc3e
        public_6f4cc04 : nop
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x14]
        add edx, 0xC
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+4]
        shl ecx, 4
        add ecx, edx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], 1
        public_6f4cc3e : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ss : [ebp-8]
        test eax, eax
        je public_6f4cc59
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret 
        public_6f4cc59 : nop
        mov eax, dword ptr ss : [ebp-4]
        test eax, eax
        jne public_6f4cc69
        mov eax, 2
        mov esp, ebp
        pop ebp
        ret 
        public_6f4cc69 : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0xC]
        inc edx
        push edx
        call public_6f4c2f0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+4]
        shl ecx, 4
        mov dword ptr ds : [ecx+edx], 0xFFFFFFFC
        mov ecx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        shl edx, 4
        push 0
        mov dword ptr ds : [edx+eax+8], ecx
        call public_6f4cef0
        add esp, 8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f4cb90)
    }
}

#undef public_6f4cbec
#undef public_6f4cc04
#undef public_6f4cc3e
#undef public_6f4cc59
#undef public_6f4cc69
