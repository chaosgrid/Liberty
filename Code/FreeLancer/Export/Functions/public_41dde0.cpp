#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);

#define public_41de02 _public_41de02
#define public_41de1a _public_41de1a
#define public_41de3d _public_41de3d
#define public_41de69 _public_41de69
#define public_41de88 _public_41de88
#define public_41de93 _public_41de93
#define public_41deb6 _public_41deb6
#define public_41deba _public_41deba
#define public_41debe _public_41debe
#define public_41defc _public_41defc
#define public_41df1f _public_41df1f

PROC_DECLARE(0x41dde0, internal_41dde0, public_41dde0);
extern "C" NAKED register_t __cdecl internal_41dde0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        test al, al
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        push esi
        push edi
        je public_41de3d
        test ebp, ebp
        jne public_41de02
        mov dword ptr ds : [public_616794], ebp
        mov byte ptr ds : [public_616798], 0
        jmp public_41de3d
        public_41de02 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_41de1a
        mov eax, 0x1F
        public_41de1a : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, ebp
        mov edi, offset public_616798
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_616798], 0
        mov dword ptr ds : [public_616794], eax
        public_41de3d : nop
        mov al, byte ptr ds : [public_616855]
        test al, al
        je public_41df1f
        mov eax, dword ptr ds : [public_616858]
        test eax, eax
        je public_41de69
        add eax, 4
        push ebp
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_41df1f
        public_41de69 : nop
        test ebp, ebp
        push ebx
        mov ebx, ebp
        je public_41deb6
/*FIXUP push offset public_5c95f4 @0x41de70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95f4
        push ebp
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_41de88
        mov ebx, offset public_616798
        public_41de88 : nop
        mov eax, dword ptr ds : [public_616740]
        xor edi, edi
        test eax, eax
        jbe public_41deb6
        public_41de93 : nop
        mov esi, dword ptr ds : [edi*4+public_616744]
        lea eax, ds:[esi+4]
        push ebx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_41deba
        mov eax, dword ptr ds : [public_616740]
        inc edi
        cmp edi, eax
        jb public_41de93
        public_41deb6 : nop
        xor esi, esi
        jmp public_41debe
        public_41deba : nop
        test esi, esi
        jne public_41defc
        public_41debe : nop
        test ebp, ebp
        je public_41defc
        cmp byte ptr ss : [ebp], 0
        je public_41defc
/*FIXUP push offset public_5c95f4 @0x41dec8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95f4
        push ebp
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_41defc
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebp
        push 0x4AD
/*FIXUP push offset public_5c952c @0x41dee7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c952c
        mov eax, 0x100002
/*FIXUP push offset public_5c9604 @0x41def1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9604
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_41defc : nop
        cmp esi, dword ptr ds : [public_616858]
        pop ebx
        je public_41df1f
        test esi, esi
        mov dword ptr ds : [public_616858], esi
        je public_41df1f
        mov ecx, dword ptr ds : [esi+0x60]
        test ecx, ecx
        jbe public_41df1f
        xor eax, eax
        xor edx, edx
        div ecx
        mov dword ptr ds : [esi+0x64], edx
        public_41df1f : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x41dde0)
    }
}

#undef public_41de02
#undef public_41de1a
#undef public_41de3d
#undef public_41de69
#undef public_41de88
#undef public_41de93
#undef public_41deb6
#undef public_41deba
#undef public_41debe
#undef public_41defc
#undef public_41df1f
