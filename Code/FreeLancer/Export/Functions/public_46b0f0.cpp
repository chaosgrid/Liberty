#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_57db50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46b100 _public_46b100
#define public_46b127 _public_46b127
#define public_46b141 _public_46b141

PROC_DECLARE(0x46b0f0, internal_46b0f0, public_46b0f0);
extern "C" NAKED register_t __cdecl internal_46b0f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d434]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        mov ebx, eax
        cmp edi, ebx
        je public_46b141
        public_46b100 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_46b127
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+8], 0
        public_46b127 : nop
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_66d438]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_66d438], ecx
        jne public_46b100
        public_46b141 : nop
        mov esi, dword ptr ss : [esp+0x10]
        push 0
/*FIXUP push offset public_66d430 @0x46b147*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d430
        push esi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        push esi
        call public_57db50
        mov eax, dword ptr ds : [public_66d43c]
        add esp, 0x10
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [public_66d43c], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x46b0f0)
    }
}

#undef public_46b100
#undef public_46b127
#undef public_46b141
