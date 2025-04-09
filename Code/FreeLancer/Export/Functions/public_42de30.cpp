#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42de30);
CLANG_FORWARD_PROC_SYMBOL(public_42f0b0);
CLANG_FORWARD_PROC_SYMBOL(public_42fdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4304b0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_42de63 _public_42de63
#define public_42de8d _public_42de8d
#define public_42dec4 _public_42dec4
#define public_42df23 _public_42df23
#define public_42df28 _public_42df28
#define public_42df30 _public_42df30
#define public_42df35 _public_42df35
#define public_42df41 _public_42df41
#define public_42dfc2 _public_42dfc2
#define public_42e001 _public_42e001
#define public_42e020 _public_42e020
#define public_42e035 _public_42e035
#define public_42e044 _public_42e044
#define public_42e050 _public_42e050
#define public_42e05d _public_42e05d
#define public_42e06f _public_42e06f

PROC_DECLARE(0x42de30, internal_42de30, public_42de30);
extern "C" NAKED register_t __cdecl internal_42de30()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_5c6cf4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, ecx
/*FIXUP push offset public_5ca98c @0x42de40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca98c
        mov ecx, edi
        call ebx
        test al, al
        mov ecx, edi
        je public_42de63
        push 0
        call dword ptr ds : [public_5c6d00]
        pop edi
        mov dword ptr ds : [esi+4], eax
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_42de63 : nop
        push offset public_5ca980 @0x42de63*/
  FIXUP public_42de63 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca980
        call ebx
        test al, al
        mov ecx, edi
        je public_42de8d
        mov bl, byte ptr ds : [esi+0x1C]
        push 0
        call dword ptr ds : [public_5c6034]
        xor al, bl
        and al, 1
        xor al, bl
        pop edi
        mov byte ptr ds : [esi+0x1C], al
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_42de8d : nop
        push offset public_5ca978 @0x42de8d*/
  FIXUP public_42de8d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca978
        call ebx
        test al, al
        mov ecx, edi
        je public_42dec4
        call dword ptr ds : [public_5c6698]
        lea ecx, ss:[esp+0x14]
        mov edi, eax
        call dword ptr ds : [public_5c69a0]
        push 1
        push edi
        call dword ptr ds : [public_5c6028]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
/*FIXUP public_42dec4 : nop
        push offset public_5ca96c @0x42dec4*/
  FIXUP public_42dec4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca96c
        call ebx
        test al, al
        je public_42e06f
        mov ecx, edi
        call dword ptr ds : [public_5c6698]
        lea ecx, ss:[esp+0x14]
        mov edi, eax
        call dword ptr ds : [public_5c69a0]
        push 1
        push edi
        call dword ptr ds : [public_5c6028]
        mov ecx, dword ptr ds : [esi+0x18]
        add esi, 0xC
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 2
        add esp, 8
        cmp ecx, 1
        mov edi, eax
        jae public_42dfc2
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_42df23
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_42df28
        public_42df23 : nop
        mov ecx, 1
        public_42df28 : nop
        test edx, edx
        jne public_42df30
        xor eax, eax
        jmp public_42df35
        public_42df30 : nop
        sub eax, edx
        sar eax, 2
        public_42df35 : nop
        push ebp
        lea ebp, ds:[eax+ecx]
        test ebp, ebp
        mov eax, ebp
        jge public_42df41
        xor eax, eax
        public_42df41 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_5b7e84
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_42f0b0
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_4304b0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add edx, 4
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_42f0b0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        lea ecx, ds:[ebx+ebp*4]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5ad970
        pop ebp
        lea edx, ds:[ebx+eax*4+4]
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_42dfc2 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_42e020
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_42f0b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_42fdf0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_42e05d
        public_42e001 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_42e001
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_42e020 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_42f0b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_42e044
        public_42e035 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_42e035
        public_42e044 : nop
        lea ecx, ds:[edi+4]
        cmp edi, ecx
        mov eax, edi
        je public_42e05d
        lea ecx, ds:[ecx]
        public_42e050 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_42e050
        public_42e05d : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov al, 1
        pop ebx
        pop ecx
        ret 4
        public_42e06f : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x42de30)
    }
}

#undef public_42de63
#undef public_42de8d
#undef public_42dec4
#undef public_42df23
#undef public_42df28
#undef public_42df30
#undef public_42df35
#undef public_42df41
#undef public_42dfc2
#undef public_42e001
#undef public_42e020
#undef public_42e035
#undef public_42e044
#undef public_42e050
#undef public_42e05d
#undef public_42e06f
