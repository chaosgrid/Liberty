#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446c60);
CLANG_FORWARD_PROC_SYMBOL(public_446c80);
CLANG_FORWARD_PROC_SYMBOL(public_446eb0);
CLANG_FORWARD_PROC_SYMBOL(public_446ec0);
CLANG_FORWARD_PROC_SYMBOL(public_447690);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5b99f1);

#define public_4476ec _public_4476ec
#define public_4476ee _public_4476ee
#define public_44773a _public_44773a
#define public_44773c _public_44773c
#define public_447779 _public_447779
#define public_44777b _public_44777b
#define public_447791 _public_447791
#define public_4477b4 _public_4477b4

PROC_DECLARE(0x447690, internal_447690, public_447690);
extern "C" NAKED register_t __cdecl internal_447690()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b99f1 @0x447692*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b99f1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+0x78]
        mov eax, ebx
        imul eax, 0x44
        add eax, 4
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 0
        je public_4476ec
/*FIXUP push offset _public_446c80 @0x4476d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446c80
/*FIXUP push offset _public_446c60 @0x4476d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446c60
        push ebx
        lea esi, ds:[eax+4]
        push 0x44
        push esi
        mov dword ptr ds : [eax], ebx
        call public_5b7fba
        mov eax, esi
        jmp public_4476ee
        public_4476ec : nop
        xor eax, eax
        public_4476ee : nop
        lea esi, ds:[ebx*8+4]
        or ebp, 0xFFFFFFFF
        push esi
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ds : [edi+0xA0], eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 1
        je public_44773a
/*FIXUP push offset _public_446ec0 @0x44771b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446ec0
/*FIXUP push offset _public_446eb0 @0x447720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446eb0
        push ebx
        lea ebp, ds:[eax+4]
        push 8
        push ebp
        mov dword ptr ds : [eax], ebx
        call public_5b7fba
        mov eax, ebp
        or ebp, 0xFFFFFFFF
        jmp public_44773c
        public_44773a : nop
        xor eax, eax
        public_44773c : nop
        push esi
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ds : [edi+0xA4], eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        test eax, eax
        mov dword ptr ss : [esp+0x1C], 2
        je public_447779
/*FIXUP push offset _public_446ec0 @0x44775f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446ec0
/*FIXUP push offset _public_446eb0 @0x447764*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_446eb0
        push ebx
        lea esi, ds:[eax+4]
        push 8
        push esi
        mov dword ptr ds : [eax], ebx
        call public_5b7fba
        jmp public_44777b
        public_447779 : nop
        xor esi, esi
        public_44777b : nop
        mov dword ptr ds : [edi+0xA8], esi
        xor esi, esi
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        jle public_4477b4
        mov ebp, dword ptr ds : [public_5c61c0]
        public_447791 : nop
        mov ecx, dword ptr ds : [edi+0x74]
        push esi
        call ebp
        mov ecx, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [ecx+esi*8], eax
        mov ecx, dword ptr ds : [edi+0x74]
        push esi
        call ebp
        mov edx, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [edx+esi*8], eax
        inc esi
        cmp esi, ebx
        jl public_447791
        public_4477b4 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x447690)
    }
}

#undef public_4476ec
#undef public_4476ee
#undef public_44773a
#undef public_44773c
#undef public_447779
#undef public_44777b
#undef public_447791
#undef public_4477b4
