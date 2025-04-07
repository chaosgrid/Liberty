#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d466f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d583b0);

#define public_6d527d8 _public_6d527d8
#define public_6d52821 _public_6d52821
#define public_6d5283a _public_6d5283a
#define public_6d5286f _public_6d5286f
#define public_6d52898 _public_6d52898
#define public_6d528b6 _public_6d528b6
#define public_6d528fe _public_6d528fe
#define public_6d52908 _public_6d52908
#define public_6d52935 _public_6d52935
#define public_6d52971 _public_6d52971
#define public_6d5297b _public_6d5297b
#define public_6d529a2 _public_6d529a2
#define public_6d52a04 _public_6d52a04
#define public_6d52a15 _public_6d52a15
#define public_6d52a27 _public_6d52a27

PROC_DECLARE(0x6d52790, internal_6d52790, public_6d52790);
extern "C" NAKED register_t __cdecl internal_6d52790()
{
    __asm
    {
        sub esp, 0x418
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x428]
        mov esi, ecx
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[esi+0x44]
        call public_6d583b0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x48]
        je public_6d52a27
        mov ebp, dword ptr ds : [eax+0x1C]
        test ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d52a27
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        jne public_6d527d8
        mov esi, offset public_6d64efc
        public_6d527d8 : nop
        mov edi, dword ptr ds : [public_6d647e8]
        push ebx
        call edi
        test al, al
        je public_6d52935
        push esi
        call dword ptr ds : [public_6d64c98]
        mov ebx, eax
        push ebx
        call dword ptr ds : [public_6d64ca0]
        push ebx
        call dword ptr ds : [public_6d64c80]
        mov edi, dword ptr ds : [public_6d90144]
        mov ebp, eax
        lea eax, ss:[ebp+ebp]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ds : [public_6d90150], edi
        mov esi, ebx
        jle public_6d5283a
        mov edi, eax
        public_6d52821 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi]
        mov ecx, offset public_6d8fd38
        inc esi
        push eax
        call public_6d466f0
        dec edi
        jne public_6d52821
        mov edi, dword ptr ds : [public_6d90150]
        public_6d5283a : nop
        mov al, byte ptr ds : [public_6d9014c]
        test al, al
        mov eax, dword ptr ds : [public_6d9013c]
        lea ecx, ds:[eax-1]
        jne public_6d5286f
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        lea edx, ds:[edx+edx-1]
        or edx, 1
        and edx, ecx
        mov ecx, dword ptr ds : [public_6d90138]
        sub ecx, eax
        shl edx, cl
        jmp public_6d528b6
        public_6d5286f : nop
        mov eax, 1
        shl eax, cl
        mov ecx, dword ptr ds : [public_6d90148]
        xor ecx, edi
        mov edi, dword ptr ds : [public_6d90138]
        lea eax, ds:[eax+eax-1]
        or eax, 1
        mov esi, 8
        xor edx, edx
        and eax, ecx
        cmp edi, esi
        jb public_6d528b6
        public_6d52898 : nop
        mov ebp, eax
        mov ecx, edi
        sub ecx, esi
        and ebp, 0xFF
        shl ebp, cl
        add esi, 8
        shr eax, 8
        or edx, ebp
        cmp esi, edi
        jbe public_6d52898
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d528b6 : nop
        push edx
        push ebp
        lea edx, ss:[esp+0x124]
/*FIXUP push offset public_6d6aec0 @0x6d528bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push edx
        call dword ptr ds : [public_6d64c74]
        push ebx
        call dword ptr ds : [public_6d64c94]
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 0x18
        call dword ptr ds : [public_6d647e8]
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d528fe
/*FIXUP push offset public_6d8d308 @0x6d528f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x20]
        push ecx
        jmp public_6d52908
/*FIXUP public_6d528fe : nop
        push offset public_6d8d200 @0x6d528fe*/
  FIXUP public_6d528fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0x20]
        push edx
        public_6d52908 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d5290a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x120]
        push eax
/*FIXUP push offset public_6d90158 @0x6d5291e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea ecx, ss:[esp+0x330]
        push 0
        push ecx
        call esi
        mov ebp, dword ptr ss : [esp+0x28]
        jmp public_6d529a2
        public_6d52935 : nop
        push 0x104
        lea edx, ss:[esp+0x120]
        push esi
        push edx
        call dword ptr ds : [public_6d64be0]
        lea eax, ss:[esp+0x24]
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 0x10
        call edi
        test al, al
        mov esi, dword ptr ds : [public_6d64bc0]
        push 0
        je public_6d52971
/*FIXUP push offset public_6d8d308 @0x6d52965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+0x20]
        push ecx
        jmp public_6d5297b
/*FIXUP public_6d52971 : nop
        push offset public_6d8d200 @0x6d52971*/
  FIXUP public_6d52971 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+0x20]
        push edx
        public_6d5297b : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d5297d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call esi
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x120]
        push eax
/*FIXUP push offset public_6d90158 @0x6d52991*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        lea ecx, ss:[esp+0x330]
        push 0
        push ecx
        call esi
        public_6d529a2 : nop
        add esp, 0x14
        push 0
/*FIXUP push offset public_6d6b8f8 @0x6d529a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b8f8
        lea edx, ss:[esp+0x32C]
        push edx
        lea eax, ss:[esp+0x22C]
        push 0
        push eax
        call esi
        mov bl, byte ptr ss : [esp+0x444]
        add esp, 0x14
        test bl, bl
        je public_6d52a04
        lea ecx, ss:[esp+0x220]
/*FIXUP push offset public_6d6b4e4 @0x6d529d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b4e4
        push ecx
        call dword ptr ds : [public_6d64bd8]
        add esp, 8
        test eax, eax
        je public_6d52a15
        push eax
        call dword ptr ds : [public_6d64bd0]
        add esp, 4
        mov byte ptr ss : [ebp+0x32], bl
        pop ebx
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x418
        ret 8
        public_6d52a04 : nop
        lea edx, ss:[esp+0x220]
        push edx
        call dword ptr ds : [public_6d64cac]
        add esp, 4
        public_6d52a15 : nop
        mov byte ptr ss : [ebp+0x32], bl
        pop ebx
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x418
        ret 8
        public_6d52a27 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x418
        ret 8
        UNREACHABLE_TRAP(0x6d52790)
    }
}

#undef public_6d527d8
#undef public_6d52821
#undef public_6d5283a
#undef public_6d5286f
#undef public_6d52898
#undef public_6d528b6
#undef public_6d528fe
#undef public_6d52908
#undef public_6d52935
#undef public_6d52971
#undef public_6d5297b
#undef public_6d529a2
#undef public_6d52a04
#undef public_6d52a15
#undef public_6d52a27
