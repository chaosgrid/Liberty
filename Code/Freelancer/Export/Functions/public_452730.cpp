#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445620);

#define public_4527c8 _public_4527c8
#define public_452803 _public_452803
#define public_452858 _public_452858
#define public_452895 _public_452895
#define public_4528f4 _public_4528f4
#define public_4529c0 _public_4529c0
#define public_4529cd _public_4529cd

PROC_DECLARE(0x452730, internal_452730, public_452730);
extern "C" NAKED register_t __cdecl internal_452730()
{
    __asm
    {
        sub esp, 0xC0
        mov eax, dword ptr ss : [esp+0xC8]
        test eax, eax
        push ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x38], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        jne public_452803
        mov eax, dword ptr ss : [esp+0xD0]
        mov ecx, dword ptr ds : [eax+0x6C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_4527c8
        pop edi
        pop esi
        or eax, eax
        pop ebx
        add esp, 0xC0
        ret 0x10
        public_4527c8 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x98]
        jmp public_4529c0
        public_452803 : nop
        cmp eax, 2
        jne public_452895
        mov edx, dword ptr ss : [esp+0xD0]
        mov edi, dword ptr ss : [esp+0xD8]
        mov ecx, dword ptr ds : [edx+0x6C]
        push edi
        call public_445620
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_452858
        push edi
        push 0x255
/*FIXUP push offset public_5cd2e4 @0x452830*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd2e4
        mov eax, 0x100002
/*FIXUP push offset public_5cd390 @0x45283a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd390
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        or eax, esi
        pop esi
        pop ebx
        add esp, 0xC0
        ret 0x10
        public_452858 : nop
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [edx+0x98]
        jmp public_4529c0
        public_452895 : nop
        cmp eax, 1
        jne public_4529cd
        mov eax, dword ptr ss : [esp+0xD0]
        mov esi, dword ptr ds : [eax+0x6C]
        mov ebx, dword ptr ss : [esp+0xD8]
        add esi, 0x304
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c61c4]
        mov edi, eax
        cmp edi, 0xFFFFFFFF
        jne public_4528f4
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x265
/*FIXUP push offset public_5cd2e4 @0x4528d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd2e4
        mov eax, 0x100001
/*FIXUP push offset public_5cd340 @0x4528db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cd340
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        or eax, edi
        pop edi
        pop esi
        pop ebx
        add esp, 0xC0
        ret 0x10
        public_4528f4 : nop
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c61c0]
        mov ebp, dword ptr ds : [public_5c6214]
        push edi
        mov ecx, esi
        mov ebx, eax
        call ebp
        add eax, 4
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x40], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [eax+8]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], edx
        call ebp
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        add esi, 0x10
        mov ecx, 9
        lea edi, ss:[esp+0x88]
        rep movsd
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x58], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x5C], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x60], edx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x98]
        mov esi, eax
        lea edx, ss:[esp+0x40]
        mov ecx, 9
        lea edi, ss:[esp+0x64]
        push edx
        lea eax, ss:[esp+0x50]
        rep movsd
        push eax
        lea ecx, ss:[esp+0x60]
        call dword ptr ds : [public_5c6270]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0xB0]
        push edx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_5c6274]
        pop ebp
        public_4529c0 : nop
        mov esi, eax
        lea edi, ss:[esp+0x18]
        mov ecx, 9
        rep movsd
        public_4529cd : nop
        mov eax, dword ptr ss : [esp+0xD0]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea esi, ds:[eax+0x2C]
        lea edx, ss:[esp+0x4C]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6278]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ss : [esp+0xDC]
        lea ecx, ds:[edi+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0xAC]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c627c]
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0xC0
        ret 0x10
        UNREACHABLE_TRAP(0x452730)
    }
}

#undef public_4527c8
#undef public_452803
#undef public_452858
#undef public_452895
#undef public_4528f4
#undef public_4529c0
#undef public_4529cd
