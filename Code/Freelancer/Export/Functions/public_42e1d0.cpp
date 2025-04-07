#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41aa50);
CLANG_FORWARD_PROC_SYMBOL(public_42e1d0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);

#define public_42e1f0 _public_42e1f0
#define public_42e230 _public_42e230
#define public_42e265 _public_42e265
#define public_42e275 _public_42e275
#define public_42e279 _public_42e279
#define public_42e286 _public_42e286

PROC_DECLARE(0x42e1d0, internal_42e1d0, public_42e1d0);
extern "C" NAKED register_t __cdecl internal_42e1d0()
{
    __asm
    {
        sub esp, 8
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        mov esi, dword ptr ss : [ebp+0x10]
        xor al, al
        cmp esi, ecx
        je public_42e286
        push ebx
        push edi
        lea edi, ds:[esi+4]
        lea esp, ss:[esp]
        public_42e1f0 : nop
        mov eax, dword ptr ds : [esi]
        push 0xFFFFFFFF
        push 1
        push eax
        call public_41aa50
        add esp, 0xC
        test eax, eax
        setne bl
        test bl, bl
        mov dword ptr ss : [esp+0x14], eax
        mov byte ptr ss : [esp+0x13], bl
        je public_42e230
        mov edx, dword ptr ss : [ebp+0x30]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[ebp+0x28]
        push 1
        push edx
        call public_537260
        add esi, 4
        add edi, 4
        jmp public_42e279
        nop 
        lea esp, ss:[esp]
        public_42e230 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
/*FIXUP push offset public_5caa24 @0x42e239*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa24
        push 0x166
/*FIXUP push offset public_5ca8c8 @0x42e243*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca8c8
        mov eax, 0x100001
/*FIXUP push offset public_5ca9c0 @0x42e24d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca9c0
        push eax
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp+0x14]
        add esp, 0x18
        cmp edi, ecx
        mov eax, edi
        je public_42e275
        mov edx, esi
        sub edx, edi
        public_42e265 : nop
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+eax], ebx
        add eax, 4
        cmp eax, ecx
        jne public_42e265
        mov bl, byte ptr ss : [esp+0x13]
        public_42e275 : nop
        add dword ptr ss : [ebp+0x14], 0xFFFFFFFC
        public_42e279 : nop
        cmp esi, dword ptr ss : [ebp+0x14]
        jne public_42e1f0
        pop edi
        mov al, bl
        pop ebx
        public_42e286 : nop
        pop esi
        pop ebp
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x42e1d0)
    }
}

#undef public_42e1f0
#undef public_42e230
#undef public_42e265
#undef public_42e275
#undef public_42e279
#undef public_42e286
