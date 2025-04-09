#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_41af40);

#define public_41af89 _public_41af89
#define public_41af95 _public_41af95
#define public_41afbb _public_41afbb

PROC_DECLARE(0x41af40, internal_41af40, public_41af40);
extern "C" NAKED register_t __cdecl internal_41af40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        je public_41afbb
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_41af89
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sar eax, 3
        cmp eax, ecx
        jbe public_41af89
/*FIXUP push offset public_5c92f4 @0x41af65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c92f4
        push 0x14A
/*FIXUP push offset public_5c92c4 @0x41af6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c92c4
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x41af79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_41af89 : nop
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [ebx+8]
        je public_41afbb
        mov ebp, dword ptr ss : [esp+0x18]
        public_41af95 : nop
        cmp edi, dword ptr ss : [esp+0x1C]
        jge public_41afbb
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        push 1
        push eax
        call public_41aa50
        mov dword ptr ss : [ebp+edi*4], eax
        mov eax, dword ptr ds : [ebx+8]
        add esp, 0xC
        add esi, 8
        inc edi
        cmp esi, eax
        jne public_41af95
        public_41afbb : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x41af40)
    }
}

#undef public_41af89
#undef public_41af95
#undef public_41afbb
