#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9d50);
CLANG_FORWARD_PROC_SYMBOL(public_62ff1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6395cb4);

#define public_62ff226 _public_62ff226
#define public_62ff23b _public_62ff23b
#define public_62ff269 _public_62ff269
#define public_62ff272 _public_62ff272
#define public_62ff295 _public_62ff295
#define public_62ff29e _public_62ff29e
#define public_62ff2c1 _public_62ff2c1
#define public_62ff2ca _public_62ff2ca

PROC_DECLARE(0x62ff1f0, internal_62ff1f0, public_62ff1f0);
extern "C" NAKED register_t __cdecl internal_62ff1f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6395cb4 @0x62ff1f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395cb4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov ebx, dword ptr ss : [ebp+0x38]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        lea edi, ss:[ebp+0x34]
        mov dword ptr ss : [esp+0x20], 2
        je public_62ff23b
        public_62ff226 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_62b9d50
        cmp esi, ebx
        jne public_62ff226
        public_62ff23b : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ss : [ebp+0x28]
        add esp, 4
        cmp eax, ebx
        je public_62ff272
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62ff269
        cmp cl, 0xFF
        je public_62ff269
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62ff272
        public_62ff269 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62ff272 : nop
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x30], ebx
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, ebx
        je public_62ff29e
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62ff295
        cmp cl, 0xFF
        je public_62ff295
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62ff29e
        public_62ff295 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62ff29e : nop
        mov dword ptr ss : [ebp+0x18], ebx
        mov dword ptr ss : [ebp+0x1C], ebx
        mov dword ptr ss : [ebp+0x20], ebx
        mov eax, dword ptr ss : [ebp+8]
        cmp eax, ebx
        je public_62ff2ca
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62ff2c1
        cmp cl, 0xFF
        je public_62ff2c1
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62ff2ca
        public_62ff2c1 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62ff2ca : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0xC], ebx
        mov dword ptr ss : [ebp+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62ff1f0)
    }
}

#undef public_62ff226
#undef public_62ff23b
#undef public_62ff269
#undef public_62ff272
#undef public_62ff295
#undef public_62ff29e
#undef public_62ff2c1
#undef public_62ff2ca
