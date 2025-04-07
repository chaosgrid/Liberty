#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637cfe0);
CLANG_FORWARD_PROC_SYMBOL(public_637d300);

#define public_637d346 _public_637d346
#define public_637d3a6 _public_637d3a6
#define public_637d3ce _public_637d3ce
#define public_637d3fd _public_637d3fd
#define public_637d402 _public_637d402
#define public_637d41d _public_637d41d
#define public_637d44a _public_637d44a
#define public_637d450 _public_637d450
#define public_637d465 _public_637d465

PROC_DECLARE(0x637d300, internal_637d300, public_637d300);
extern "C" NAKED register_t __cdecl internal_637d300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, 0xC2
        jge public_637d465
        mov al, byte ptr ds : [esi+public_658c602]
        test al, al
        jne public_637d465
        mov al, byte ptr ds : [esi+public_658c540]
        test al, al
        jne public_637d346
        mov eax, dword ptr ds : [esi*4+public_658c0b4]
        mov ecx, dword ptr ss : [esp+8]
        push eax
/*FIXUP push offset public_63edca4 @0x637d335*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63edca4
        push ecx
        call dword ptr ds : [public_63991e8]
        add esp, 0xC
        pop esi
        ret 
        public_637d346 : nop
        push esi
        call public_637cfe0
        add esp, 4
        test eax, eax
        jne public_637d465
        mov eax, dword ptr ds : [esi*4+public_658c0b4]
        test eax, eax
        je public_637d465
        push ebx
        mov ebx, dword ptr ds : [public_63991e8]
        mov byte ptr ds : [esi+public_658c602], 1
        mov ax, word ptr ds : [esi*2+public_658c3bc]
        cmp ax, 0xFFFF
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        je public_637d3a6
        xor edx, edx
        mov dl, al
        mov ecx, dword ptr ds : [edx*8+public_658b9d8]
        test ecx, ecx
        jne public_637d3a6
/*FIXUP push offset public_63f5288 @0x637d396*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5288
        push edi
        call ebx
        add esp, 8
        jmp public_637d450
        public_637d3a6 : nop
        mov cl, byte ptr ds : [esi+public_658c540]
        cmp cl, 5
        jl public_637d402
        cmp ax, 0xFFFF
        jne public_637d3ce
        mov eax, dword ptr ds : [esi*8+public_658b9dc]
        mov ecx, dword ptr ds : [esi*8+public_658b9d8]
        push eax
        push ecx
/*FIXUP push offset public_63f5280 @0x637d3c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5280
        jmp public_637d44a
        public_637d3ce : nop
        cmp cl, 5
        jl public_637d402
        cmp ax, 0xFFFF
        je public_637d3fd
        xor edx, edx
        mov dl, byte ptr ds : [esi*2+public_658c3bc]
        sub esp, 8
        fild dword ptr ds : [edx*8+public_658b9d8]
        fdivr qword ptr ds : [esi*8+public_658b9d8]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63f5280 @0x637d3f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5280
        jmp public_637d44a
        public_637d3fd : nop
        cmp cl, 5
        jge public_637d450
        public_637d402 : nop
        cmp ax, 0xFFFF
        jne public_637d41d
        mov eax, dword ptr ds : [esi*8+public_658b9d8]
        push eax
/*FIXUP push offset public_63f527c @0x637d410*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f527c
        push edi
        call ebx
        add esp, 0xC
        jmp public_637d450
        public_637d41d : nop
        cmp cl, 5
        jge public_637d450
        cmp ax, 0xFFFF
        je public_637d450
        fild dword ptr ds : [esi*8+public_658b9d8]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi*2+public_658c3bc]
        sub esp, 8
        fidiv dword ptr ds : [ecx*8+public_658b9d8]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_63f5274 @0x637d445*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f5274
        public_637d44a : nop
        push edi
        call ebx
        add esp, 0x10
        public_637d450 : nop
        mov edx, dword ptr ds : [esi*4+public_658c0b4]
        push edx
/*FIXUP push offset public_63f526c @0x637d458*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63f526c
        push edi
        call ebx
        add esp, 0xC
        pop edi
        pop ebx
        public_637d465 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x637d300)
    }
}

#undef public_637d346
#undef public_637d3a6
#undef public_637d3ce
#undef public_637d3fd
#undef public_637d402
#undef public_637d41d
#undef public_637d44a
#undef public_637d450
#undef public_637d465
