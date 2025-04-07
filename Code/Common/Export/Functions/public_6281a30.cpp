#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627f2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6281a30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392ec8);

#define public_6281a7b _public_6281a7b
#define public_6281a85 _public_6281a85
#define public_6281aa4 _public_6281aa4
#define public_6281ab8 _public_6281ab8
#define public_6281acf _public_6281acf
#define public_6281ae2 _public_6281ae2

PROC_DECLARE(0x6281a30, internal_6281a30, public_6281a30);
extern "C" NAKED register_t __cdecl internal_6281a30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392ec8 @0x6281a32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392ec8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov edx, dword ptr ds : [public_63fc438]
        push ebp
        push esi
        push edi
        mov edi, ecx
        inc edx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ds : [public_63fc438], edx
        mov eax, dword ptr ds : [public_63fc434]
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], esi
        je public_6281a7b
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc434], ecx
        dec dword ptr ds : [public_63fc440]
        jmp public_6281a85
        public_6281a7b : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_6281a85 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], esi
        mov ecx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [ecx]
        cmp ebp, ecx
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        je public_6281ae2
        push ebx
        public_6281aa4 : nop
        mov ebx, dword ptr ds : [esi+4]
        push 0xC
        mov ecx, edi
        call public_627f2d0
        test ebx, ebx
        mov dword ptr ds : [eax], esi
        jne public_6281ab8
        mov ebx, eax
        public_6281ab8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6281acf
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax], edx
        public_6281acf : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x24]
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, eax
        jne public_6281aa4
        pop ebx
        public_6281ae2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6281a30)
    }
}

#undef public_6281a7b
#undef public_6281a85
#undef public_6281aa4
#undef public_6281ab8
#undef public_6281acf
#undef public_6281ae2
