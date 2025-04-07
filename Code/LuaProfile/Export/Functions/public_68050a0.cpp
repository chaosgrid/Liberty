#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6804f80);
CLANG_FORWARD_PROC_SYMBOL(public_6804fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6805070);
CLANG_FORWARD_PROC_SYMBOL(public_68050a0);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

#define public_68050de _public_68050de
#define public_68050e3 _public_68050e3
#define public_680510a _public_680510a

PROC_DECLARE(0x68050a0, internal_68050a0, public_68050a0);
extern "C" NAKED register_t __cdecl internal_68050a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
/*FIXUP push offset public_680d5c4 @0x68050ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d5c4
        push eax
        call public_6805070
        mov edi, dword ptr ss : [esp+0x2C]
        push edi
        mov esi, eax
        call public_6804fb0
        push esi
        push edi
        call public_6804f80
        add esp, 0x14
        test eax, eax
        jne public_680510a
        cmp edi, 0xFFFFFFFD
        je public_68050de
        test edi, edi
        mov eax, offset public_680e600
        jne public_68050e3
        public_68050de : nop
        mov eax, offset public_680d7c8
        public_68050e3 : nop
        push eax
        lea ecx, ds:[edi*4]
        mov edx, offset public_680d930
        sub edx, ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi*4+public_680d5c4]
        push eax
        push ecx
/*FIXUP push offset public_680d790 @0x68050fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d790
        call public_6805fb0
        add esp, 0x10
        public_680510a : nop
        mov eax, dword ptr ss : [esp+0x2C]
        lea edi, ds:[edi+edi*8]
        shl edi, 1
        mov ebp, eax
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+0xC]
        sub esi, edi
        mov edi, dword ptr ds : [public_680e604]
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
        mov eax, dword ptr ds : [public_680e604]
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
        UNREACHABLE_TRAP(0x68050a0)
    }
}

#undef public_68050de
#undef public_68050e3
#undef public_680510a
