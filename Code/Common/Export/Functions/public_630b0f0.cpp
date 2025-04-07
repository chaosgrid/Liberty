#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd40);
CLANG_FORWARD_PROC_SYMBOL(public_630cd70);

#define public_630b14b _public_630b14b
#define public_630b164 _public_630b164
#define public_630b175 _public_630b175
#define public_630b188 _public_630b188
#define public_630b1b2 _public_630b1b2
#define public_630b1d1 _public_630b1d1
#define public_630b1d8 _public_630b1d8
#define public_630b1da _public_630b1da
#define public_630b1dd _public_630b1dd
#define public_630b1fc _public_630b1fc
#define public_630b20a _public_630b20a

PROC_DECLARE(0x630b0f0, internal_630b0f0, public_630b0f0);
extern "C" NAKED register_t __cdecl internal_630b0f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0x10]
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        mov dword ptr ds : [esi+8], eax
        mov al, byte ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+0xC], ecx
        lea edi, ds:[esi+0x14]
        mov ecx, edi
        mov byte ptr ds : [esi+0x11], dl
        mov byte ptr ds : [esi+0x12], al
        call public_630cd40
        mov ebp, dword ptr ss : [esp+0x10]
        test ebp, ebp
        je public_630b1dd
        cmp byte ptr ss : [ebp], 0x24
        jne public_630b164
        mov edi, dword ptr ds : [public_639902c]
/*FIXUP push offset public_63a34a0 @0x630b133*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a34a0
        push ebp
        call edi
        add esp, 8
        test eax, eax
        jne public_630b14b
        mov byte ptr ds : [esi+0x11], 1
        jmp public_630b1dd
/*FIXUP public_630b14b : nop
        push offset public_63a3498 @0x630b14b*/
  FIXUP public_630b14b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3498
        push ebp
        call edi
        add esp, 8
        test eax, eax
        jne public_630b1dd
        mov byte ptr ds : [esi+0x12], 1
        jmp public_630b1dd
        public_630b164 : nop
        mov eax, dword ptr ds : [esi+0x94]
        test eax, eax
        je public_630b175
        mov ecx, edi
        call public_630cd40
        public_630b175 : nop
        cmp byte ptr ss : [ebp], 0
        je public_630b1b2
        mov ecx, edi
        call public_630cd40
        mov edx, edi
        mov eax, ebp
        sub edx, ebp
        public_630b188 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_630b188
/*FIXUP push offset public_63a3494 @0x630b192*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a3494
        push edi
        call dword ptr ds : [public_6399288]
        add esp, 8
        test eax, eax
        mov dword ptr ds : [edi+0x80], eax
        je public_630b1b2
        mov ecx, edi
        call public_630cd70
        public_630b1b2 : nop
        mov al, byte ptr ds : [esi+4]
        test al, al
        je public_630b1d8
        mov al, byte ptr ds : [esi+0x11]
        test al, al
        jne public_630b1d1
        mov al, byte ptr ds : [esi+0x12]
        test al, al
        jne public_630b1d1
        mov eax, dword ptr ds : [esi+0x94]
        test eax, eax
        je public_630b1d8
        public_630b1d1 : nop
        mov eax, 1
        jmp public_630b1da
        public_630b1d8 : nop
        xor eax, eax
        public_630b1da : nop
        mov byte ptr ds : [esi+0x10], al
        public_630b1dd : nop
        mov al, byte ptr ds : [esi+4]
        test al, al
        je public_630b20a
        mov al, byte ptr ds : [esi+0x11]
        test al, al
        jne public_630b1fc
        mov al, byte ptr ds : [esi+0x12]
        test al, al
        jne public_630b1fc
        mov eax, dword ptr ds : [esi+0x94]
        test eax, eax
        je public_630b20a
        public_630b1fc : nop
        mov eax, 1
        pop edi
        mov byte ptr ds : [esi+0x10], al
        pop esi
        pop ebp
        ret 0x14
        public_630b20a : nop
        xor eax, eax
        pop edi
        mov byte ptr ds : [esi+0x10], al
        pop esi
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x630b0f0)
    }
}

#undef public_630b14b
#undef public_630b164
#undef public_630b175
#undef public_630b188
#undef public_630b1b2
#undef public_630b1d1
#undef public_630b1d8
#undef public_630b1da
#undef public_630b1dd
#undef public_630b1fc
#undef public_630b20a
