#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63503c0);
CLANG_FORWARD_JUMP_SYMBOL(public_639803b);

#define public_63503ec _public_63503ec
#define public_63503fa _public_63503fa
#define public_6350400 _public_6350400
#define public_6350407 _public_6350407
#define public_6350415 _public_6350415
#define public_635041b _public_635041b
#define public_635043a _public_635043a
#define public_6350441 _public_6350441

PROC_DECLARE(0x63503c0, internal_63503c0, public_63503c0);
extern "C" NAKED register_t __cdecl internal_63503c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639803b @0x63503c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639803b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], edi
        mov ecx, dword ptr ds : [edi+8]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6350400
        public_63503ec : nop
        cmp ecx, ebx
        mov esi, dword ptr ds : [ecx+0x74]
        je public_63503fa
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        public_63503fa : nop
        cmp esi, ebx
        mov ecx, esi
        jne public_63503ec
        public_6350400 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        cmp ecx, ebx
        je public_635041b
        public_6350407 : nop
        cmp ecx, ebx
        mov esi, dword ptr ds : [ecx+0x74]
        je public_6350415
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x10]
        public_6350415 : nop
        cmp esi, ebx
        mov ecx, esi
        jne public_6350407
        public_635041b : nop
        mov eax, dword ptr ds : [edi+0x10]
        lea ecx, ds:[edi+0x14]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        je public_6350441
        cmp eax, ebx
        je public_635043a
        push eax
        call public_6343fb0
        add esp, 4
        public_635043a : nop
        mov dword ptr ds : [edi+0x10], ebx
        mov word ptr ds : [edi+0xC], bx
        public_6350441 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov word ptr ds : [edi+0xE], bx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63503c0)
    }
}

#undef public_63503ec
#undef public_63503fa
#undef public_6350400
#undef public_6350407
#undef public_6350415
#undef public_635041b
#undef public_635043a
#undef public_6350441
