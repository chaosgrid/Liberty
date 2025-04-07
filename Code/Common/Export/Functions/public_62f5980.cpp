#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_627f7b0);
CLANG_FORWARD_PROC_SYMBOL(public_627f7e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62f53b0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62f59c7 _public_62f59c7
#define public_62f59d8 _public_62f59d8
#define public_62f59e8 _public_62f59e8
#define public_62f5a10 _public_62f5a10
#define public_62f5a15 _public_62f5a15
#define public_62f5a47 _public_62f5a47
#define public_62f5a70 _public_62f5a70
#define public_62f5a99 _public_62f5a99
#define public_62f5ac2 _public_62f5ac2
#define public_62f5aeb _public_62f5aeb
#define public_62f5b14 _public_62f5b14
#define public_62f5b3d _public_62f5b3d
#define public_62f5b68 _public_62f5b68
#define public_62f5b80 _public_62f5b80
#define public_62f5b95 _public_62f5b95
#define public_62f5ba5 _public_62f5ba5
#define public_62f5bf3 _public_62f5bf3
#define public_62f5bf8 _public_62f5bf8
#define public_62f5bfd _public_62f5bfd
#define public_62f5c0e _public_62f5c0e
#define public_62f5c88 _public_62f5c88
#define public_62f5cc7 _public_62f5cc7
#define public_62f5cd6 _public_62f5cd6
#define public_62f5cf0 _public_62f5cf0
#define public_62f5cff _public_62f5cff
#define public_62f5d06 _public_62f5d06
#define public_62f5d13 _public_62f5d13
#define public_62f5d19 _public_62f5d19
#define public_62f5d1c _public_62f5d1c
#define public_62f5d35 _public_62f5d35
#define public_62f5d41 _public_62f5d41

PROC_DECLARE(0x62f5980, internal_62f5980, public_62f5980);
extern "C" NAKED register_t __cdecl internal_62f5980()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov esi, ecx
        push ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_62f53b0
        test al, al
        jne public_62f5d35
/*FIXUP push offset public_63a15ac @0x62f599f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a15ac
        mov ecx, ebp
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5a15
        push 0
        call public_6310a30
        mov ebp, dword ptr ds : [public_639902c]
        mov ebx, eax
        mov esi, offset public_63eca40
        xor edi, edi
        public_62f59c7 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62f59d8
        push eax
        push ebx
        call ebp
        add esp, 8
        test eax, eax
        je public_62f5a10
        public_62f59d8 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x1F8
        jb public_62f59c7
        xor esi, esi
        public_62f59e8 : nop
        test esi, esi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x88], esi
        jne public_62f5d35
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+0x88], 7
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_62f5a10 : nop
        mov esi, dword ptr ds : [esi+4]
        jmp public_62f59e8
/*FIXUP public_62f5a15 : nop
        push offset public_63a1afc @0x62f5a15*/
  FIXUP public_62f5a15 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1afc
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5a47
        push 0
        call public_6310a30
        push eax
        call public_630d3f0
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+0x8C], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_62f5a47 : nop
        push offset public_63a1ae8 @0x62f5a47*/
  FIXUP public_62f5a47 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1ae8
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5a70
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x90]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_62f5a70 : nop
        push offset public_63a1ad8 @0x62f5a70*/
  FIXUP public_62f5a70 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1ad8
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5a99
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x94]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_62f5a99 : nop
        push offset public_63a1ac4 @0x62f5a99*/
  FIXUP public_62f5a99 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1ac4
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5ac2
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x98]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_62f5ac2 : nop
        push offset public_63a1ab0 @0x62f5ac2*/
  FIXUP public_62f5ac2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1ab0
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5aeb
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0x9C]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_62f5aeb : nop
        push offset public_63a1a98 @0x62f5aeb*/
  FIXUP public_62f5aeb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a98
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5b14
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0xA4]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_62f5b14 : nop
        push offset public_63a1a84 @0x62f5b14*/
  FIXUP public_62f5b14 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a84
        call public_6310410
        test al, al
        mov ecx, ebp
        je public_62f5b3d
        push 0
        call public_63108f0
        fstp dword ptr ds : [esi+0xA0]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
/*FIXUP public_62f5b3d : nop
        push offset public_63a1a74 @0x62f5b3d*/
  FIXUP public_62f5b3d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1a74
        call public_6310410
        test al, al
        je public_62f5d41
        push 0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 0
        call public_6310560
        test al, al
        jne public_62f5d35
        public_62f5b68 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, ebp
        call public_6310a30
        mov ebx, eax
        mov esi, offset public_63eca40
        xor edi, edi
        lea ecx, ds:[ecx]
        public_62f5b80 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62f5b95
        push eax
        push ebx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_62f5bf3
        public_62f5b95 : nop
        add edi, 8
        add esi, 8
        cmp edi, 0x1F8
        jb public_62f5b80
        xor esi, esi
        public_62f5ba5 : nop
        test esi, esi
        mov dword ptr ss : [esp+0x10], esi
        je public_62f5d1c
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0xB0]
        mov edx, dword ptr ds : [ecx+0xB4]
        lea esi, ds:[ecx+0xA8]
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov edi, eax
        jae public_62f5c88
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_62f5bf8
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jbe public_62f5bf8
        mov ecx, esi
        call public_626a600
        mov ebx, eax
        jmp public_62f5bfd
        public_62f5bf3 : nop
        mov esi, dword ptr ds : [esi+4]
        jmp public_62f5ba5
        public_62f5bf8 : nop
        mov ebx, 1
        public_62f5bfd : nop
        mov ecx, esi
        call public_626a600
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_62f5c0e
        xor eax, eax
        public_62f5c0e : nop
        shl eax, 2
        push eax
        call public_6391d9c
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebx, eax
        push ebx
        push edi
        push ecx
        mov ecx, esi
        call public_627f7b0
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], eax
        call public_627f7e0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi+8]
        add eax, 4
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_627f7b0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_628f050
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        lea edx, ds:[ebx+ebp*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], edx
        call public_626a600
        mov ebp, dword ptr ss : [esp+0x24]
        lea eax, ds:[ebx+eax*4+4]
        mov dword ptr ds : [esi+4], ebx
        jmp public_62f5d19
        public_62f5c88 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        mov ecx, esi
        jae public_62f5cd6
        lea edx, ds:[edi+4]
        push edx
        push eax
        push edi
        call public_627f7b0
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x10]
        push ecx
        sub edx, edi
        sar edx, 2
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_627f7e0
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_62f5d13
        public_62f5cc7 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        add edi, 4
        cmp edi, eax
        jne public_62f5cc7
        jmp public_62f5d13
        public_62f5cd6 : nop
        push eax
        push eax
        add eax, 0xFFFFFFFC
        push eax
        call public_627f7b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-4]
        cmp edi, eax
        je public_62f5cff
        nop 
        lea esp, ss:[esp]
        public_62f5cf0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        jne public_62f5cf0
        public_62f5cff : nop
        lea eax, ds:[edi+4]
        cmp edi, eax
        je public_62f5d13
        public_62f5d06 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], ecx
        add edi, 4
        cmp edi, eax
        jne public_62f5d06
        public_62f5d13 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 4
        public_62f5d19 : nop
        mov dword ptr ds : [esi+8], eax
        public_62f5d1c : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6310560
        test al, al
        je public_62f5b68
        public_62f5d35 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        public_62f5d41 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62f5980)
    }
}

#undef public_62f59c7
#undef public_62f59d8
#undef public_62f59e8
#undef public_62f5a10
#undef public_62f5a15
#undef public_62f5a47
#undef public_62f5a70
#undef public_62f5a99
#undef public_62f5ac2
#undef public_62f5aeb
#undef public_62f5b14
#undef public_62f5b3d
#undef public_62f5b68
#undef public_62f5b80
#undef public_62f5b95
#undef public_62f5ba5
#undef public_62f5bf3
#undef public_62f5bf8
#undef public_62f5bfd
#undef public_62f5c0e
#undef public_62f5c88
#undef public_62f5cc7
#undef public_62f5cd6
#undef public_62f5cf0
#undef public_62f5cff
#undef public_62f5d06
#undef public_62f5d13
#undef public_62f5d19
#undef public_62f5d1c
#undef public_62f5d35
#undef public_62f5d41
