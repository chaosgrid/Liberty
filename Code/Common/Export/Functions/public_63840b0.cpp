#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63840b0);

#define public_63840e6 _public_63840e6
#define public_63840f7 _public_63840f7
#define public_6384121 _public_6384121
#define public_6384142 _public_6384142

PROC_DECLARE(0x63840b0, internal_63840b0, public_63840b0);
extern "C" NAKED register_t __cdecl internal_63840b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        mov ebx, dword ptr ds : [public_63991e8]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        push eax
/*FIXUP push offset public_63edca4 @0x63840c9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edca4
        push edi
        call ebx
        mov eax, dword ptr ss : [ebp+0x14]
        add esp, 0xC
        test eax, eax
        jle public_6384142
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x14], eax
        public_63840e6 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        test eax, eax
        mov edx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edx]
        jle public_6384121
        mov dword ptr ss : [esp+0x10], eax
        public_63840f7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edx, ecx
        push edx
        push eax
/*FIXUP push offset public_63f7260 @0x6384100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f7260
        push edi
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ecx
        add esi, 8
        call ebx
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0x10
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_63840f7
/*FIXUP public_6384121 : nop
        push offset public_63edccc @0x6384121*/
  FIXUP public_6384121 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edccc
        push edi
        call ebx
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        add ecx, 4
        add esp, 8
        dec eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_63840e6
        public_6384142 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x63840b0)
    }
}

#undef public_63840e6
#undef public_63840f7
#undef public_6384121
#undef public_6384142
