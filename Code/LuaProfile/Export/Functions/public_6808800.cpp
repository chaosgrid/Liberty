#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_6806990);
CLANG_FORWARD_PROC_SYMBOL(public_6807810);
CLANG_FORWARD_PROC_SYMBOL(public_6807890);
CLANG_FORWARD_PROC_SYMBOL(public_6808800);

#define public_6808848 _public_6808848

PROC_DECLARE(0x6808800, internal_6808800, public_6808800);
extern "C" NAKED register_t __cdecl internal_6808800()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+0x14]
        add edx, eax
/*FIXUP push offset public_680dd28 @0x6808812*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd28
        mov eax, edx
        push 0x64
        push eax
        push edi
        mov dword ptr ds : [esi+0x14], edx
        call public_6807890
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x14]
        add esp, 0x10
        test ecx, ecx
        jne public_6808848
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+0x10]
        push eax
        push edi
        mov byte ptr ds : [edx+1], al
        call public_6806990
        add esp, 8
        pop edi
        pop esi
        ret 
        public_6808848 : nop
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+0x10]
        mov cl, al
        add cl, 0x80
        inc eax
        push eax
        push edi
        mov byte ptr ds : [edx+1], cl
        call public_6806990
/*FIXUP push offset public_680dd24 @0x680885d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dd24
        call public_6805a80
        push eax
        push edi
        call public_6807810
        add esp, 0x14
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808800)
    }
}

#undef public_6808848
