#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e210);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e300);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

#define public_6f4e33e _public_6f4e33e
#define public_6f4e343 _public_6f4e343
#define public_6f4e36a _public_6f4e36a

PROC_DECLARE(0x6f4e300, internal_6f4e300, public_6f4e300);
extern "C" NAKED register_t __cdecl internal_6f4e300()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset public_6f60648 @0x6f4e30b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60648
        push eax
        call public_6f4e2d0
        mov edi, dword ptr ss : [esp+0x2C]
        push edi
        mov esi, eax
        call public_6f4e210
        push esi
        push edi
        call public_6f4e1e0
        add esp, 0x14
        test eax, eax
        jne public_6f4e36a
        cmp edi, 0xFFFFFFFD
        je public_6f4e33e
        test edi, edi
        mov eax, offset public_6f61e0c
        jne public_6f4e343
        public_6f4e33e : nop
        mov eax, offset public_6f6084c
        public_6f4e343 : nop
        push eax
        lea ecx, ds:[edi*4]
        mov edx, offset public_6f609d0
        sub edx, ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi*4+public_6f60648]
        push eax
        push ecx
/*FIXUP push offset public_6f60814 @0x6f4e35d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60814
        call public_6f4f7a0
        add esp, 0x10
        public_6f4e36a : nop
        mov eax, dword ptr ss : [esp+0x2C]
        lea edi, ds:[edi+edi*8]
        shl edi, 1
        mov ebp, eax
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+0xC]
        sub esi, edi
        mov edi, dword ptr ds : [public_6f61e28]
        mov edi, dword ptr ds : [edi+0x64]
        shl esi, 4
        add edi, esi
        mov dword ptr ss : [esp+0x1C], ebp
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+0xC], edi
        mov eax, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [eax+0x64]
        add eax, esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax+4], edx
        pop esi
        mov dword ptr ds : [eax+8], ebx
        pop ebp
        mov dword ptr ds : [eax+0xC], ecx
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4e300)
    }
}

#undef public_6f4e33e
#undef public_6f4e343
#undef public_6f4e36a
