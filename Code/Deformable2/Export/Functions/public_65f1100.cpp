#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f1100);
CLANG_FORWARD_PROC_SYMBOL(public_65f13e0);

#define public_65f1140 _public_65f1140
#define public_65f1298 _public_65f1298
#define public_65f12a3 _public_65f12a3
#define public_65f12cd _public_65f12cd
#define public_65f130f _public_65f130f
#define public_65f131a _public_65f131a
#define public_65f1328 _public_65f1328
#define public_65f1347 _public_65f1347
#define public_65f13c7 _public_65f13c7

PROC_DECLARE(0x65f1100, internal_65f1100, public_65f1100);
extern "C" NAKED register_t __cdecl internal_65f1100()
{
    __asm
    {
        sub esp, 0x1FC
        push ebx
        mov ebx, dword ptr ss : [esp+0x208]
        mov eax, dword ptr ds : [ebx]
        push ebp
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0xC8]
        push ecx
/*FIXUP push offset public_660204c @0x65f111c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_660204c
        push ebx
        mov dword ptr ss : [esp+0x30], esi
        call dword ptr ds : [eax+0x48]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ebp
        je public_65f1347
        push edi
        lea esp, ss:[esp]
        public_65f1140 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x6C], offset public_6602040
        mov ecx, 0xB
        lea edi, ss:[esp+0x70]
        rep stosd
        mov eax, dword ptr ds : [ebx]
        lea edx, ss:[esp+0xF8]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x74], edx
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        push ebx
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x84], 0x80000000
        mov dword ptr ss : [esp+0x88], 1
        mov dword ptr ss : [esp+0x90], 3
        mov dword ptr ss : [esp+0x94], 0x8000080
        mov dword ptr ss : [esp+0x74], 0x34
        mov dword ptr ss : [esp+0xA4], ebp
        call dword ptr ds : [eax+0xC]
        test eax, eax
        jl public_65f131a
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6602034 @0x65f11c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602034
        push eax
        call dword ptr ds : [ecx+0x60]
        mov edx, dword ptr ds : [esi+4]
        mov ebx, dword ptr ss : [esp+0x10]
        imul edx, 0x34
        mov dword ptr ss : [esp+0x30], eax
        lea eax, ds:[edx+esi+8]
        mov dword ptr ss : [esp+0x18], eax
        xor eax, eax
        mov dword ptr ss : [esp+0x38], offset public_6602040
        mov ecx, 0xB
        lea edi, ss:[esp+0x3C]
        rep stosd
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x44], 0x80000000
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x50], 3
        mov dword ptr ss : [esp+0x54], 0x8000080
        mov dword ptr ss : [esp+0x40], offset public_6602024
        mov dword ptr ss : [esp+0x34], 0x34
        mov dword ptr ss : [esp+0x64], 0xFFFFFFFF
        call public_65f13e0
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x34]
        push edx
        push ebx
        xor edi, edi
        call dword ptr ds : [ecx+0x7C]
        mov ebp, eax
        cmp ebp, 0xFFFFFFFF
        je public_65f12a3
        mov eax, dword ptr ds : [ebx]
        push edi
        lea ecx, ss:[esp+0x30]
        push ecx
        push 0x30
        lea edx, ss:[esp+0xA8]
        push edx
        push ebp
        push ebx
        call dword ptr ds : [eax+0x14]
        test eax, eax
        je public_65f13c7
        cmp dword ptr ss : [esp+0x2C], 0x30
        jne public_65f13c7
        mov eax, dword ptr ss : [esp+0x18]
        lea edi, ds:[eax+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x9C]
        rep movsd
        mov esi, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x1C], 1
        public_65f1298 : nop
        mov ecx, dword ptr ds : [ebx]
        push ebp
        push ebx
        call dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ss : [esp+0x1C]
        public_65f12a3 : nop
        mov eax, dword ptr ss : [esp+0x30]
        xor edx, edx
        test edi, edi
        setne dl
        dec edx
        and edx, 0x80004005
        test eax, eax
        mov edi, edx
        je public_65f12cd
        mov eax, dword ptr ss : [esp+0x214]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6602020 @0x65f12c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602020
        push eax
        call dword ptr ds : [ecx+0x60]
        public_65f12cd : nop
        test edi, edi
        jl public_65f130f
        lea eax, ss:[esp+0xF8]
        lea edx, ss:[esp+0xF8]
        push eax
        mov dword ptr ss : [esp+0x24], edx
        call dword ptr ds : [public_660100c]
        mov edx, dword ptr ss : [esp+0x14]
        add esp, 4
        push edx
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        inc dword ptr ds : [esi+4]
        public_65f130f : nop
        mov ebp, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x214]
        public_65f131a : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_65f1328
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_65f1328 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0xCC]
        push ecx
        push ebp
        push ebx
        call dword ptr ds : [eax+0x4C]
        test eax, eax
        jne public_65f1140
        mov edx, dword ptr ds : [ebx]
        push ebp
        push ebx
        call dword ptr ds : [edx+0x50]
        pop edi
        public_65f1347 : nop
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [public_6603134]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+0x20C]
        push eax
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_660100c]
        add esp, 4
        push ebx
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x1E80], eax
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [esi+0x1E80]
        pop esi
        xor eax, eax
        cmp ecx, 0xFFFFFFFF
        pop ebp
        setne al
        pop ebx
        add esp, 0x1FC
        ret 8
        public_65f13c7 : nop
        mov dword ptr ss : [esp+0x1C], 0
        jmp public_65f1298
        UNREACHABLE_TRAP(0x65f1100)
    }
}

#undef public_65f1140
#undef public_65f1298
#undef public_65f12a3
#undef public_65f12cd
#undef public_65f130f
#undef public_65f131a
#undef public_65f1328
#undef public_65f1347
#undef public_65f13c7
