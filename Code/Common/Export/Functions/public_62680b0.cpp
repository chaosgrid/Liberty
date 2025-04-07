#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62680e5 _public_62680e5
#define public_62680fa _public_62680fa
#define public_6268127 _public_6268127

PROC_DECLARE(0x62680b0, internal_62680b0, public_62680b0);
extern "C" NAKED register_t __cdecl internal_62680b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov cl, byte ptr ds : [eax]
        push 0x28
        mov byte ptr ds : [edi], cl
        call public_6391d9c
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        cmp esi, eax
        je public_6268127
        push ebp
        public_62680e5 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_62680fa
        mov ebp, eax
        public_62680fa : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_626c1e0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_62680e5
        pop ebp
        public_6268127 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62680b0)
    }
}

#undef public_62680e5
#undef public_62680fa
#undef public_6268127
