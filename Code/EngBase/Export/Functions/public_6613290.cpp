#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613290);

#define public_66132af _public_66132af
#define public_66132c1 _public_66132c1
#define public_66132d0 _public_66132d0
#define public_66132fe _public_66132fe
#define public_661330d _public_661330d
#define public_661331a _public_661331a
#define public_6613327 _public_6613327
#define public_6613339 _public_6613339
#define public_6613353 _public_6613353

PROC_DECLARE(0x6613290, internal_6613290, public_6613290);
extern "C" NAKED register_t __cdecl internal_6613290()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ebp
        je public_66132fe
        lea esi, ds:[eax+8]
        sub ebp, eax
        public_66132af : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_66132c1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi], 0
        public_66132c1 : nop
        mov eax, dword ptr ds : [esi-8]
        test eax, eax
        mov dword ptr ds : [edi], eax
        je public_66132d0
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        public_66132d0 : nop
        mov eax, dword ptr ds : [esi-4]
        add esi, 0x14
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi-0x14]
        mov dword ptr ds : [esi+ebp-0x14], ecx
        mov edx, dword ptr ds : [esi-0x10]
        mov dword ptr ds : [edi+0xC], edx
        mov eax, dword ptr ds : [esi-0xC]
        mov dword ptr ds : [edi+0x10], eax
        lea ecx, ds:[esi-8]
        add edi, 0x14
        cmp ecx, ebx
        jne public_66132af
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ss : [esp+0x18]
        public_66132fe : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, edi
        cmp edi, ebx
        je public_6613353
        mov ebp, dword ptr ds : [public_662902c]
        public_661330d : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_661331a
        push eax
        call ebp
        add esp, 4
        public_661331a : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6613327
        push eax
        call ebp
        add esp, 4
        public_6613327 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6613339
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi], 0
        public_6613339 : nop
        add esi, 0x14
        cmp esi, ebx
        jne public_661330d
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edi
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6613353 : nop
        mov dword ptr ds : [ecx+8], edi
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6613290)
    }
}

#undef public_66132af
#undef public_66132c1
#undef public_66132d0
#undef public_66132fe
#undef public_661330d
#undef public_661331a
#undef public_6613327
#undef public_6613339
#undef public_6613353
