#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6374c40);
CLANG_FORWARD_PROC_SYMBOL(public_6376b50);
CLANG_FORWARD_PROC_SYMBOL(public_6376cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6377600);
CLANG_FORWARD_PROC_SYMBOL(public_6377910);
CLANG_FORWARD_PROC_SYMBOL(public_6383370);
CLANG_FORWARD_PROC_SYMBOL(public_6384200);
CLANG_FORWARD_PROC_SYMBOL(public_63846c0);
CLANG_FORWARD_PROC_SYMBOL(public_6384720);
CLANG_FORWARD_PROC_SYMBOL(public_6384840);

#define public_6374c6d _public_6374c6d
#define public_6374c98 _public_6374c98
#define public_6374c9d _public_6374c9d
#define public_6374caa _public_6374caa
#define public_6374cea _public_6374cea
#define public_6374d0f _public_6374d0f
#define public_6374d23 _public_6374d23
#define public_6374d44 _public_6374d44

PROC_DECLARE(0x6374c40, internal_6374c40, public_6374c40);
extern "C" NAKED register_t __cdecl internal_6374c40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        push ecx
        push edx
        push eax
        call public_6376cd0
        mov eax, dword ptr ds : [public_658b970]
        xor esi, esi
        add esp, 0x10
        cmp eax, esi
        jne public_6374c6d
        call public_6377600
        public_6374c6d : nop
        call public_6376b50
/*FIXUP push offset public_658b268 @0x6374c72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b268
        call public_6377910
        mov eax, dword ptr ds : [public_658b1a0]
        add esp, 4
        cmp eax, esi
        jne public_6374c98
        cmp dword ptr ds : [public_658b050], esi
        je public_6374c9d
        cmp dword ptr ds : [public_658b19c], esi
        je public_6374c9d
        public_6374c98 : nop
        call public_6384200
        public_6374c9d : nop
        cmp dword ptr ds : [public_658b1dc], esi
        je public_6374caa
        call public_6384840
        public_6374caa : nop
        cmp dword ptr ds : [public_658b1d8], esi
        jl public_6374d44
        mov ecx, dword ptr ds : [public_658b908]
        mov edx, dword ptr ds : [public_658b24c]
        mov eax, dword ptr ds : [public_658b904]
        push ecx
        push edx
        push eax
        call public_63846c0
        mov eax, dword ptr ds : [public_658b050]
        add esp, 0xC
        cmp eax, esi
        je public_6374d23
        mov ecx, dword ptr ds : [public_658b24c]
        lea eax, ds:[ecx-1]
        xor ecx, ecx
        cmp eax, esi
        jle public_6374d0f
        public_6374cea : nop
        mov edx, dword ptr ds : [public_658b908]
        mov edx, dword ptr ds : [edx+ecx*4]
        mov dword ptr ds : [edx+eax*8], esi
        mov dword ptr ds : [edx+eax*8+4], esi
        mov edx, dword ptr ds : [public_658b908]
        mov edx, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [edx+ecx*8], esi
        mov dword ptr ds : [edx+ecx*8+4], esi
        inc ecx
        cmp ecx, eax
        jl public_6374cea
        public_6374d0f : nop
        mov ecx, dword ptr ds : [public_658b908]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov dword ptr ds : [edx+eax*8], esi
        mov dword ptr ds : [edx+eax*8+4], 0x3FF00000
        public_6374d23 : nop
        mov eax, dword ptr ds : [public_658b908]
        mov ecx, dword ptr ds : [public_658b24c]
        push eax
        push ecx
        call public_6383370
        mov edx, dword ptr ds : [public_658b908]
        push edx
        call public_6384720
        add esp, 0xC
        public_6374d44 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6374c40)
    }
}

#undef public_6374c6d
#undef public_6374c98
#undef public_6374c9d
#undef public_6374caa
#undef public_6374cea
#undef public_6374d0f
#undef public_6374d23
#undef public_6374d44
