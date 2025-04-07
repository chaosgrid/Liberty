#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fe0);

#define public_680600c _public_680600c
#define public_6806030 _public_6806030
#define public_6806048 _public_6806048

PROC_DECLARE(0x6805fe0, internal_6805fe0, public_6805fe0);
extern "C" NAKED register_t __cdecl internal_6805fe0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        sub edi, 0xD
        cmp al, 0x40
        jne public_680600c
        mov eax, dword ptr ss : [esp+0xC]
        inc esi
        push esi
        push edi
/*FIXUP push offset public_680d910 @0x6805ffa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d910
        push eax
        call dword ptr ds : [public_680c060]
        add esp, 0x10
        pop edi
        pop esi
        ret 
        public_680600c : nop
        cmp al, 0x28
        jne public_6806030
        mov edx, dword ptr ds : [public_680d904]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [public_680d908]
        mov dword ptr ds : [ecx+4], eax
        mov dl, byte ptr ds : [public_680d90c]
        pop edi
        mov byte ptr ds : [ecx+8], dl
        pop esi
        ret 
        public_6806030 : nop
        push 0xA
        push esi
        call dword ptr ds : [public_680c070]
        add esp, 8
        test eax, eax
        je public_6806048
        sub eax, esi
        cmp eax, edi
        jge public_6806048
        mov edi, eax
        public_6806048 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
/*FIXUP push offset public_680d8f4 @0x680604e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d8f4
        push esi
        call dword ptr ds : [public_680c060]
        mov ecx, dword ptr ds : [public_680d8ec]
        lea eax, ds:[edi+esi+8]
        add esp, 0x10
        mov dword ptr ds : [eax], ecx
        mov dl, byte ptr ds : [public_680d8f0]
        pop edi
        mov byte ptr ds : [eax+4], dl
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805fe0)
    }
}

#undef public_680600c
#undef public_6806030
#undef public_6806048
