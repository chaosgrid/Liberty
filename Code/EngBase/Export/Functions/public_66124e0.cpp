#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6611d80);
CLANG_FORWARD_PROC_SYMBOL(public_6612320);
CLANG_FORWARD_PROC_SYMBOL(public_66124e0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_6628230);

#define public_6612520 _public_6612520
#define public_66125b9 _public_66125b9
#define public_66125cc _public_66125cc
#define public_66125e7 _public_66125e7
#define public_66125f3 _public_66125f3
#define public_661262d _public_661262d
#define public_661263e _public_661263e
#define public_6612677 _public_6612677
#define public_661268e _public_661268e
#define public_6612697 _public_6612697
#define public_66126a6 _public_66126a6
#define public_66126b2 _public_66126b2
#define public_66126b6 _public_66126b6
#define public_66126cd _public_66126cd

PROC_DECLARE(0x66124e0, internal_66124e0, public_66124e0);
extern "C" NAKED register_t __cdecl internal_66124e0()
{
    __asm
    {
        mov eax, 0x4024
        call public_6628230
        mov eax, dword ptr ss : [esp+0x4028]
        push ebx
        push ebp
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov ebp, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+4], eax
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [edi+0x18], ebx
        cmp ebp, eax
        jae public_66126cd
        lea ecx, ss:[ebp+4]
        push esi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], ebx
        public_6612520 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x4040]
        mov dword ptr ss : [esp+0x24], 2
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov esi, dword ptr ds : [edx+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x13]
        add esi, edx
        mov edx, dword ptr ss : [esp+0x403C]
        push eax
        mov eax, dword ptr ds : [edi+4]
        push ecx
        push edx
        push esi
        lea ecx, ss:[esp+0x34]
        push eax
        push ecx
        call public_6612320
        xor ebx, ebx
        add esp, 0x18
        cmp al, bl
        je public_66125cc
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push eax
        lea eax, ss:[esp+0x28]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x1C]
        cmp al, bl
        je public_66125cc
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx+0x14]
        mov eax, dword ptr ds : [eax+edx]
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_66125b9
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+0x18], eax
        mov dword ptr ss : [esp+0x20], ecx
        public_66125b9 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add ebp, 4
        add eax, 4
        mov dword ptr ss : [esp+0x18], eax
        jmp public_66126b6
        public_66125cc : nop
        cmp byte ptr ss : [esp+0x13], bl
        jne public_6612677
        cmp dword ptr ds : [esi+8], ebx
        je public_661262d
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        jne public_66125e7
        mov ecx, offset public_662ace4
        public_66125e7 : nop
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        jne public_66125f3
        mov eax, offset public_662ace4
        public_66125f3 : nop
        mov edx, dword ptr ds : [edi]
        push ecx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov eax, dword ptr ds : [edx+0xC]
        push eax
/*FIXUP push offset public_662a1ac @0x66125ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a1ac
        push ecx
        call public_6611d80
        mov edx, dword ptr ds : [public_6629004]
        push eax
        push 0x2F5
        mov ecx, 0x100002
/*FIXUP push offset public_662a0f0 @0x661261b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0f0
/*FIXUP push offset public_662a0d4 @0x6612620*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x28
        jmp public_6612677
        public_661262d : nop
        cmp dword ptr ds : [esi+4], ebx
        je public_6612677
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        jne public_661263e
        mov eax, offset public_662ace4
        public_661263e : nop
        push eax
        mov eax, dword ptr ds : [edi]
        lea edx, ss:[esp+0x2038]
        mov ecx, dword ptr ds : [eax+0xC]
        push ecx
/*FIXUP push offset public_662a184 @0x661264c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a184
        push edx
        call public_6611d80
        push eax
        mov eax, dword ptr ds : [public_6629004]
        push 0x2FA
        mov ecx, 0x100002
/*FIXUP push offset public_662a0f0 @0x6612667*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0f0
/*FIXUP push offset public_662a0d4 @0x661266c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a0d4
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x24
        public_6612677 : nop
        mov esi, dword ptr ss : [ebp]
        cmp esi, ebx
        je public_6612697
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, ebx
        je public_661268e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], ebx
        public_661268e : nop
        push esi
        call public_66281d0
        add esp, 4
        public_6612697 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        je public_66126b2
        mov edx, ebp
        sub edx, eax
        public_66126a6 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_66126a6
        public_66126b2 : nop
        add dword ptr ds : [edi+0x10], 0xFFFFFFFC
        public_66126b6 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x10]
        add ecx, 0x14
        cmp ebp, eax
        mov dword ptr ss : [esp+0x14], ecx
        jb public_6612520
        pop esi
        public_66126cd : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x4024
        ret 0xC
        UNREACHABLE_TRAP(0x66124e0)
    }
}

#undef public_6612520
#undef public_66125b9
#undef public_66125cc
#undef public_66125e7
#undef public_66125f3
#undef public_661262d
#undef public_661263e
#undef public_6612677
#undef public_661268e
#undef public_6612697
#undef public_66126a6
#undef public_66126b2
#undef public_66126b6
#undef public_66126cd
