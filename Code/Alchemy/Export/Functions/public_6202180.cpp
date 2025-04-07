#include "Alchemy-PCH.h"


#define public_6202192 _public_6202192
#define public_62021a1 _public_62021a1
#define public_62021c6 _public_62021c6
#define public_62021ce _public_62021ce
#define public_62021e2 _public_62021e2
#define public_62021eb _public_62021eb
#define public_6202203 _public_6202203
#define public_620220c _public_620220c
#define public_6202218 _public_6202218

PROC_DECLARE(0x6202180, internal_6202180, public_6202180);
extern "C" NAKED register_t __cdecl internal_6202180()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        test ebx, ebx
        push edi
        jne public_6202192
        mov ebx, dword ptr ds : [public_62578b0]
        public_6202192 : nop
        test ebx, ebx
        setne al
        test al, al
        mov esi, ebx
        je public_620220c
        mov ebp, dword ptr ss : [esp+0x18]
        public_62021a1 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push ecx
        push esi
        call dword ptr ds : [eax+0x74]
        cmp ebp, dword ptr ss : [esp+0x20]
        je public_6202218
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        je public_62021c6
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x2C]
        mov esi, eax
        jmp public_6202203
        public_62021c6 : nop
        cmp esi, ebx
        jne public_62021ce
        xor esi, esi
        jmp public_6202203
        public_62021ce : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x34]
        test eax, eax
        push esi
        je public_62021e2
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0x34]
        mov esi, eax
        jmp public_6202203
        public_62021e2 : nop
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x28]
        mov edi, eax
        xor esi, esi
        public_62021eb : nop
        cmp edi, ebx
        je public_6202203
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0x34]
        mov edx, dword ptr ds : [edi]
        push edi
        mov esi, eax
        call dword ptr ds : [edx+0x28]
        test esi, esi
        mov edi, eax
        je public_62021eb
        public_6202203 : nop
        test esi, esi
        setne al
        test al, al
        jne public_62021a1
        public_620220c : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFF8
        pop ebx
        ret 0x10
        public_6202218 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6202180)
    }
}

#undef public_6202192
#undef public_62021a1
#undef public_62021c6
#undef public_62021ce
#undef public_62021e2
#undef public_62021eb
#undef public_6202203
#undef public_620220c
#undef public_6202218
