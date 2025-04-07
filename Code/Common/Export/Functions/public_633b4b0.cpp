#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632e9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_633b4f7 _public_633b4f7
#define public_633b549 _public_633b549
#define public_633b5a7 _public_633b5a7
#define public_633b5eb _public_633b5eb
#define public_633b608 _public_633b608

PROC_DECLARE(0x633b4b0, internal_633b4b0, public_633b4b0);
extern "C" NAKED register_t __cdecl internal_633b4b0()
{
    __asm
    {
        mov eax, 0x2028
        call public_6391dc0
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x8C]
        xor ebp, ebp
        test eax, eax
        push esi
        push edi
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], 0x60AD78EC
        jne public_633b549
/*FIXUP push offset public_63a4948 @0x633b4d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a4948
        call public_632e9f0
        mov dword ptr ds : [ebx+0x8C], eax
        mov eax, dword ptr ds : [ebx+0x84]
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        je public_633b549
        public_633b4f7 : nop
        mov esi, dword ptr ds : [edi+0xC10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x8C]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x2C], edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x84]
        jne public_633b4f7
        public_633b549 : nop
        mov ecx, dword ptr ds : [ebx+0x8C]
        xor edi, edi
        cmp ecx, edi
        je public_633b608
        mov eax, dword ptr ss : [esp+0x203C]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x30]
        push eax
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x34], 0x800
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x30], 0x3DCCCCCD
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_633b608
        mov eax, dword ptr ss : [esp+0x34]
        cmp edi, eax
        jae public_633b608
        lea ebx, ss:[esp+0x38]
        public_633b5a7 : nop
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        test al, al
        je public_633b5eb
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_633b5eb
        mov eax, dword ptr ss : [esp+0x203C]
        mov edx, dword ptr ds : [esi]
        push 0
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        test al, al
        je public_633b5eb
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], ecx
        public_633b5eb : nop
        mov eax, dword ptr ss : [esp+0x34]
        inc edi
        add ebx, 4
        cmp edi, eax
        jb public_633b5a7
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2028
        ret 4
        public_633b608 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x2028
        ret 4
        UNREACHABLE_TRAP(0x633b4b0)
    }
}

#undef public_633b4f7
#undef public_633b549
#undef public_633b5a7
#undef public_633b5eb
#undef public_633b608
