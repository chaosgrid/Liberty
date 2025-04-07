#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66139b0);
CLANG_FORWARD_PROC_SYMBOL(public_66142f0);
CLANG_FORWARD_PROC_SYMBOL(public_6617c90);
CLANG_FORWARD_PROC_SYMBOL(public_6619190);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_66191bb _public_66191bb
#define public_66191da _public_66191da
#define public_6619206 _public_6619206
#define public_661920a _public_661920a
#define public_661922a _public_661922a

PROC_DECLARE(0x6619190, internal_6619190, public_6619190);
extern "C" NAKED register_t __cdecl internal_6619190()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6619206
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6619206
        cmp ebx, eax
        jne public_6619206
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_66191da
        public_66191bb : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_66139b0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_66191bb
        public_66191da : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 0xC
        public_6619206 : nop
        cmp ecx, ebx
        je public_661922a
        public_661920a : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_66142f0
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov ecx, esi
        call public_6617c90
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_661920a
        public_661922a : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6619190)
    }
}

#undef public_66191bb
#undef public_66191da
#undef public_6619206
#undef public_661920a
#undef public_661922a
