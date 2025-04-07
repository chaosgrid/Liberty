#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62717d5 _public_62717d5
#define public_62717ea _public_62717ea
#define public_6271807 _public_6271807
#define public_627181a _public_627181a

PROC_DECLARE(0x62717a0, internal_62717a0, public_62717a0);
extern "C" NAKED register_t __cdecl internal_62717a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push edi
        push 0x10
        mov byte ptr ds : [esi], cl
        call public_6391d9c
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp ebp, eax
        je public_627181a
        push ebx
        public_62717d5 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_62717ea
        mov ebx, eax
        public_62717ea : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6271807
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+4], edx
        public_6271807 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_62717d5
        pop ebx
        public_627181a : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x62717a0)
    }
}

#undef public_62717d5
#undef public_62717ea
#undef public_6271807
#undef public_627181a
