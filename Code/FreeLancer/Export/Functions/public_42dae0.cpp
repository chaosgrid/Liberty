#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42dae0);

#define public_42db60 _public_42db60
#define public_42db77 _public_42db77
#define public_42db85 _public_42db85
#define public_42dbba _public_42dbba
#define public_42dbc8 _public_42dbc8
#define public_42dbe9 _public_42dbe9
#define public_42dc03 _public_42dc03
#define public_42dc1b _public_42dc1b
#define public_42dc31 _public_42dc31

PROC_DECLARE(0x42dae0, internal_42dae0, public_42dae0);
extern "C" NAKED register_t __cdecl internal_42dae0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        push edi
        mov ecx, esi
        xor bl, bl
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_42dc31
/*FIXUP push offset public_5c8b1c @0x42dafd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8b1c
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_42dc31
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        mov ebx, dword ptr ds : [public_5c6d24]
        mov ebp, eax
        mov dword ptr ss : [esp+0x10], offset public_5ca964
        mov dword ptr ss : [esp+0x14], offset public_5ca954
        mov dword ptr ss : [esp+0x18], offset public_5ca944
        mov dword ptr ss : [esp+0x1C], offset public_5ca934
        mov dword ptr ss : [esp+0x20], offset public_5ca924
        mov dword ptr ss : [esp+0x24], offset public_5ca914
        mov dword ptr ss : [esp+0x28], offset public_5ca8fc
        mov edi, 1
        nop 
        public_42db60 : nop
        mov eax, dword ptr ss : [esp+edi*4+0x10]
        push eax
        push ebp
        call ebx
        add esp, 8
        test eax, eax
        je public_42db77
        inc edi
        cmp edi, 7
        jb public_42db60
        jmp public_42db85
        public_42db77 : nop
        lea ecx, ds:[edi+edi*2]
        lea edi, ds : [ecx*4+public_667d90]
        test edi, edi
        jne public_42dbba
        public_42db85 : nop
        mov edx, dword ptr ds : [public_5c6d18]
        push ebp
        push 0x69
/*FIXUP push offset public_5ca8c8 @0x42db8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca8c8
        mov eax, 0x100001
/*FIXUP push offset public_5ca89c @0x42db98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca89c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
/*FIXUP push offset public_5c865c @0x42dba3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        mov ecx, esi
        call dword ptr ds : [public_5c6038]
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 
        public_42dbba : nop
        mov ecx, esi
        mov bl, 1
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_42dc31
        public_42dbc8 : nop
        mov ebp, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5ca888 @0x42dbce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca888
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_42dbe9
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi]
        jmp public_42dc1b
/*FIXUP public_42dbe9 : nop
        push offset public_5ca874 @0x42dbe9*/
  FIXUP public_42dbe9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca874
        call ebp
        test al, al
        mov ecx, esi
        je public_42dc03
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+4]
        jmp public_42dc1b
/*FIXUP public_42dc03 : nop
        push offset public_5ca864 @0x42dc03*/
  FIXUP public_42dc03 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca864
        call ebp
        test al, al
        je public_42dc1b
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+8]
        public_42dc1b : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_42dbc8
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 
        public_42dc31 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x42dae0)
    }
}

#undef public_42db60
#undef public_42db77
#undef public_42db85
#undef public_42dbba
#undef public_42dbc8
#undef public_42dbe9
#undef public_42dc03
#undef public_42dc1b
#undef public_42dc31
