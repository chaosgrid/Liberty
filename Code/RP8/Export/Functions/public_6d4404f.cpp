#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d4404f);

#define public_6d440a0 _public_6d440a0
#define public_6d440a4 _public_6d440a4
#define public_6d440ab _public_6d440ab
#define public_6d440e0 _public_6d440e0
#define public_6d440ec _public_6d440ec
#define public_6d440ee _public_6d440ee

PROC_DECLARE(0x6d4404f, internal_6d4404f, public_6d4404f);
extern "C" NAKED register_t __cdecl internal_6d4404f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+8], 0
        je public_6d440ee
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        push edi
        je public_6d440ec
        mov dl, byte ptr ss : [ebp+0x24]
        mov eax, dword ptr ss : [ebp+0x14]
        mov edi, dword ptr ss : [ebp+0x10]
        mov cl, byte ptr ss : [ebp+0x18]
        mov byte ptr ds : [esi+0x1A], dl
        mov dl, byte ptr ss : [ebp+0x28]
        mov dword ptr ds : [esi+4], eax
        mov al, byte ptr ss : [ebp+0x1C]
        cmp al, 3
        mov byte ptr ds : [esi+0x1B], dl
        mov dl, byte ptr ss : [ebp+0x20]
        mov dword ptr ds : [esi], edi
        mov byte ptr ds : [esi+0x18], cl
        mov byte ptr ds : [esi+0x19], al
        mov byte ptr ds : [esi+0x1C], dl
        je public_6d440a0
        test al, 2
        je public_6d440a0
        mov byte ptr ds : [esi+0x1D], 3
        jmp public_6d440a4
        public_6d440a0 : nop
        mov byte ptr ds : [esi+0x1D], 1
        public_6d440a4 : nop
        test al, 4
        je public_6d440ab
        inc byte ptr ds : [esi+0x1D]
        public_6d440ab : nop
        mov al, byte ptr ds : [esi+0x1D]
        imul cl
        movzx ecx, al
        push ebx
        mov byte ptr ds : [esi+0x1E], al
        lea ebx, ds:[ecx+7]
        sar ebx, 3
        xor edx, edx
        mov eax, 0x7FFFFFFF
        div ebx
        pop ebx
        cmp edi, eax
        jbe public_6d440e0
/*FIXUP push offset public_6d60f34 @0x6d440cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60f34
        push dword ptr ss : [ebp+8]
        call public_6d41e65
        and dword ptr ds : [esi+0xC], 0
        pop ecx
        pop ecx
        jmp public_6d440ec
        public_6d440e0 : nop
        imul ecx, edi
        add ecx, 7
        shr ecx, 3
        mov dword ptr ds : [esi+0xC], ecx
        public_6d440ec : nop
        pop edi
        pop esi
        public_6d440ee : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4404f)
    }
}

#undef public_6d440a0
#undef public_6d440a4
#undef public_6d440ab
#undef public_6d440e0
#undef public_6d440ec
#undef public_6d440ee
