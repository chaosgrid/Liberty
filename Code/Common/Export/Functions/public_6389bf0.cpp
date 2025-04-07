#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6370570);
CLANG_FORWARD_PROC_SYMBOL(public_6389bf0);

#define public_6389c18 _public_6389c18
#define public_6389c30 _public_6389c30
#define public_6389c46 _public_6389c46
#define public_6389c5e _public_6389c5e
#define public_6389c85 _public_6389c85
#define public_6389c91 _public_6389c91
#define public_6389c94 _public_6389c94
#define public_6389caa _public_6389caa
#define public_6389cbd _public_6389cbd
#define public_6389cde _public_6389cde
#define public_6389cec _public_6389cec

PROC_DECLARE(0x6389bf0, internal_6389bf0, public_6389bf0);
extern "C" NAKED register_t __cdecl internal_6389bf0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        je public_6389cec
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ds : [public_63991e8]
        je public_6389c18
        cmp eax, 0x18
        jne public_6389c30
        public_6389c18 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        push eax
        call public_636ec10
        add esp, 4
        push eax
/*FIXUP push offset public_63ee77c @0x6389c25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push ebx
        call edi
        add esp, 0xC
        public_6389c30 : nop
        mov eax, dword ptr ss : [ebp+0x50]
        test ah, 8
        jne public_6389caa
        cmp dword ptr ds : [public_658b24c], 2
        jle public_6389c46
        test ah, 0x10
        je public_6389caa
        public_6389c46 : nop
        mov eax, dword ptr ss : [ebp+0x34]
        test eax, eax
        je public_6389cde
        lea esi, ds:[eax+8]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6389cde
        public_6389c5e : nop
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63ee77c @0x6389c6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push ebx
        call edi
        mov eax, dword ptr ss : [ebp+0x34]
        lea edx, ds:[eax+4]
        add esp, 0xC
        cmp esi, edx
        jne public_6389c85
        add esi, 8
        jmp public_6389c94
        public_6389c85 : nop
        add eax, 8
        cmp esi, eax
        jne public_6389c91
        sub esi, 4
        jmp public_6389c94
        public_6389c91 : nop
        add esi, 4
        public_6389c94 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_6389c5e
/*FIXUP push offset public_63edccc @0x6389c9a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call edi
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6389caa : nop
        mov eax, dword ptr ss : [ebp+0x34]
        test eax, eax
        je public_6389cde
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_6389cde
        public_6389cbd : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        call public_6370570
        add esp, 4
        push eax
/*FIXUP push offset public_63ee77c @0x6389cca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee77c
        push ebx
        call edi
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        add esi, 4
        test eax, eax
        jne public_6389cbd
/*FIXUP public_6389cde : nop
        push offset public_63edccc @0x6389cde*/
  FIXUP public_6389cde : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push ebx
        call edi
        add esp, 8
        pop edi
        pop esi
        pop ebp
        public_6389cec : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6389bf0)
    }
}

#undef public_6389c18
#undef public_6389c30
#undef public_6389c46
#undef public_6389c5e
#undef public_6389c85
#undef public_6389c91
#undef public_6389c94
#undef public_6389caa
#undef public_6389cbd
#undef public_6389cde
#undef public_6389cec
