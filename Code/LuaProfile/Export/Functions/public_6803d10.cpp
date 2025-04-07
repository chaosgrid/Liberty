#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802b00);
CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6803d10);
CLANG_FORWARD_PROC_SYMBOL(public_6804fe0);
CLANG_FORWARD_PROC_SYMBOL(public_68051d0);

#define public_6803d54 _public_6803d54
#define public_6803d65 _public_6803d65
#define public_6803dba _public_6803dba

PROC_DECLARE(0x6803d10, internal_6803d10, public_6803d10);
extern "C" NAKED register_t __cdecl internal_6803d10()
{
    __asm
    {
        mov edx, dword ptr ds : [public_680e604]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi-0x20]
        sub edi, 0x20
        cmp eax, 0xFFFFFFFD
        je public_6803d65
        push edi
        call public_6804fe0
        mov ecx, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [ecx+0x64]
        lea eax, ds:[eax+eax*8]
        shl eax, 5
        sub esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, 0xFFFFFFFA
        jne public_6803d54
/*FIXUP push offset public_680d524 @0x6803d47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d524
        call public_6802e00
        add esp, 4
        public_6803d54 : nop
        push 1
        push 2
        push esi
        call public_6802b00
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_6803d65 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [edx+0x64]
        lea ebx, ds:[eax+eax*8]
        shl ebx, 5
        sub esi, ebx
        cmp dword ptr ds : [esi], 0xFFFFFFFA
        jne public_6803d54
        lea edx, ds:[edi+0x10]
        push edx
        push ecx
        call public_68051d0
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [public_680e604]
        add eax, 0x10
        add esp, 8
        cmp ecx, 0xFFFFFFFA
        jne public_6803dba
        mov ecx, dword ptr ds : [edx+0x64]
        sub ecx, ebx
        mov esi, dword ptr ds : [ecx+0x20]
        add ecx, 0x20
        cmp esi, 0xFFFFFFFA
        je public_6803dba
        push 1
        push 2
        push ecx
        call public_6802b00
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_6803dba : nop
        add dword ptr ds : [edx], 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edi+0xC], edx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6803d10)
    }
}

#undef public_6803d54
#undef public_6803d65
#undef public_6803dba
