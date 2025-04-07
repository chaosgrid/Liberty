#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e0d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f760);
CLANG_FORWARD_PROC_SYMBOL(public_6f55840);
CLANG_FORWARD_PROC_SYMBOL(public_6f563e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f564f0);

#define public_6f56400 _public_6f56400
#define public_6f56432 _public_6f56432

PROC_DECLARE(0x6f563e0, internal_6f563e0, public_6f563e0);
extern "C" NAKED register_t __cdecl internal_6f563e0()
{
    __asm
    {
        push 0xB
/*FIXUP push offset public_6f616f8 @0x6f563e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f616f8
        call public_6f4f760
        add esp, 8
        jmp public_6f56400
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f56400 : nop
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        call public_6f4e0d0
        mov edi, eax
        mov dword ptr ss : [esp+0x10], edi
        call public_6f4e0d0
        fild dword ptr ss : [esp+0x10]
        mov esi, offset public_6f61750
        fstp qword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x14]
        mov ebp, dword ptr ss : [esp+0x10]
        public_6f56432 : nop
        push ebx
        push ebp
        call public_6f4b6f0
        mov eax, dword ptr ds : [esi+4]
        push 1
        push eax
        call public_6f4b7c0
        mov ecx, dword ptr ds : [esi]
        push ecx
        call public_6f4b3b0
        add esi, 8
        add esp, 0x14
        cmp esi, offset public_6f61798
        jb public_6f56432
        mov edx, dword ptr ds : [public_6f5a0b8]
        push edi
/*FIXUP push offset public_6f618b8 @0x6f56461*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618b8
        push edx
        call public_6f55840
        mov eax, dword ptr ds : [public_6f5a0b8]
        push edi
        add eax, 0x20
/*FIXUP push offset public_6f618f4 @0x6f56475*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        push eax
        call public_6f55840
        mov ecx, dword ptr ds : [public_6f5a0b8]
        push edi
/*FIXUP push offset public_6f61a30 @0x6f56487*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61a30
        push ecx
        call public_6f55840
        mov edx, dword ptr ds : [public_6f5a0b8]
        push edi
        add edx, 0x20
/*FIXUP push offset public_6f61a28 @0x6f5649c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61a28
        push edx
        call public_6f55840
        mov eax, dword ptr ds : [public_6f5a0b8]
        push edi
        add eax, 0x40
/*FIXUP push offset public_6f61a20 @0x6f564b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61a20
        push eax
        call public_6f55840
        push ebx
        push ebp
        call public_6f4b6f0
        add esp, 0x44
        push 1
/*FIXUP push offset _public_6f564f0 @0x6f564c7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f564f0
        call public_6f4b7c0
/*FIXUP push offset public_6f60720 @0x6f564d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60720
        push edi
        call public_6f4b1f0
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6f563e0)
    }
}

#undef public_6f56400
#undef public_6f56432
