#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d238e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d26350);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62a52);

#define public_6d2638c _public_6d2638c
#define public_6d263a3 _public_6d263a3
#define public_6d263ba _public_6d263ba
#define public_6d26423 _public_6d26423
#define public_6d2642e _public_6d2642e
#define public_6d2643f _public_6d2643f
#define public_6d26456 _public_6d26456
#define public_6d2646d _public_6d2646d
#define public_6d264cd _public_6d264cd
#define public_6d264d3 _public_6d264d3
#define public_6d264f4 _public_6d264f4

PROC_DECLARE(0x6d26350, internal_6d26350, public_6d26350);
extern "C" NAKED register_t __cdecl internal_6d26350()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d62a52 @0x6d26358*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62a52
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        xor edi, edi
        test ah, ah
        mov eax, dword ptr ds : [esi]
        jns public_6d2642e
        cmp eax, edi
        je public_6d2638c
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x14
        cmp eax, ecx
        jbe public_6d263ba
        public_6d2638c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], 0x14
        jae public_6d263a3
        lea eax, ss:[esp+0x1C]
        public_6d263a3 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], edi
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d263ba : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x14
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], 2
        je public_6d264f4
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], offset public_6d69134
        mov cl, byte ptr ds : [public_6d904f4]
        mov al, 1
        test al, cl
        mov byte ptr ss : [esp+0x10], 3
        jne public_6d26423
/*FIXUP push offset public_6d68a74 @0x6d263f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a74
        mov dl, cl
        push 0x107
        or dl, al
        push edi
        mov ecx, offset public_6d90500
        mov byte ptr ds : [public_6d904f4], dl
        call public_6d23c70
/*FIXUP push offset _public_6d238e0 @0x6d26416*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238e0
        call public_6d6013e
        add esp, 4
        public_6d26423 : nop
        mov dword ptr ds : [esi], offset public_6d6910c
        jmp public_6d264d3
        public_6d2642e : nop
        cmp eax, edi
        je public_6d2643f
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 0x14
        cmp eax, ecx
        jbe public_6d2646d
        public_6d2643f : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0x14
        lea eax, ds:[esi+4]
        mov dword ptr ss : [esp+0x1C], 0x14
        jae public_6d26456
        lea eax, ss:[esp+0x1C]
        public_6d26456 : nop
        mov eax, dword ptr ds : [eax]
        add eax, 8
        push eax
        call public_6d60012
        mov dword ptr ds : [eax+4], edi
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6d2646d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[ecx+eax+8]
        add ecx, 0x14
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [esp+0x1C], esi
        cmp esi, edi
        mov dword ptr ss : [esp+0x10], edi
        je public_6d264f4
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], offset public_6d69134
        mov cl, byte ptr ds : [public_6d904f4]
        mov al, 1
        test al, cl
        mov byte ptr ss : [esp+0x10], al
        jne public_6d264cd
/*FIXUP push offset public_6d68a74 @0x6d264a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a74
        mov dl, cl
        push 0x107
        or dl, al
        push edi
        mov ecx, offset public_6d90500
        mov byte ptr ds : [public_6d904f4], dl
        call public_6d23c70
/*FIXUP push offset _public_6d238e0 @0x6d264c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238e0
        call public_6d6013e
        add esp, 4
        public_6d264cd : nop
        mov dword ptr ds : [esi], offset public_6d690e4
        public_6d264d3 : nop
        mov dl, byte ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0xC], offset public_6d90500
        mov byte ptr ds : [esi+0x10], dl
        mov eax, esi
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        add esp, 0xC
        ret 
        public_6d264f4 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d26350)
    }
}

#undef public_6d2638c
#undef public_6d263a3
#undef public_6d263ba
#undef public_6d26423
#undef public_6d2642e
#undef public_6d2643f
#undef public_6d26456
#undef public_6d2646d
#undef public_6d264cd
#undef public_6d264d3
#undef public_6d264f4
