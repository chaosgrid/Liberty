#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6343ff0);
CLANG_FORWARD_PROC_SYMBOL(public_636b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_636b520);

#define public_636b53b _public_636b53b
#define public_636b568 _public_636b568
#define public_636b575 _public_636b575
#define public_636b57b _public_636b57b
#define public_636b59f _public_636b59f
#define public_636b5ac _public_636b5ac
#define public_636b5c3 _public_636b5c3
#define public_636b5ca _public_636b5ca

PROC_DECLARE(0x636b520, internal_636b520, public_636b520);
extern "C" NAKED register_t __cdecl internal_636b520()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [eax+8]
        xor ebp, ebp
        cmp ecx, ebp
        push edi
        mov edi, dword ptr ds : [esi+0x70]
        jne public_636b575
        cmp word ptr ds : [esi+0x2A], bp
        jbe public_636b575
        public_636b53b : nop
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [ecx+ebp*4]
        mov ebx, dword ptr ds : [eax+0x1C]
        push edi
        push ebx
        mov ecx, esi
        mov dword ptr ds : [eax+0x1C], edi
        call public_636b3a0
        mov edx, dword ptr ds : [esi+0x6C]
        add edi, eax
        cmp dword ptr ds : [edx+4], 1
        jne public_636b568
        test ebx, ebx
        je public_636b568
        push ebx
        call public_6343ff0
        add esp, 4
        public_636b568 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x2A]
        inc ebp
        cmp ebp, eax
        jl public_636b53b
        xor ebp, ebp
        public_636b575 : nop
        cmp word ptr ds : [esi+0x22], bp
        jbe public_636b5ac
        public_636b57b : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [ecx+ebp*4]
        mov ebx, dword ptr ds : [eax+0x1C]
        push edi
        push ebx
        mov ecx, esi
        mov dword ptr ds : [eax+0x1C], edi
        call public_636b3a0
        add edi, eax
        test ebx, ebx
        je public_636b59f
        push ebx
        call public_6343ff0
        add esp, 4
        public_636b59f : nop
        xor edx, edx
        mov dx, word ptr ds : [esi+0x22]
        inc ebp
        cmp ebp, edx
        jl public_636b57b
        xor ebp, ebp
        public_636b5ac : nop
        mov eax, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x20]
        cmp eax, ecx
        je public_636b5ca
        cmp eax, ebp
        je public_636b5c3
        push eax
        call public_6343fb0
        add esp, 4
        public_636b5c3 : nop
        mov dword ptr ds : [esi+0x1C], ebp
        mov word ptr ds : [esi+0x18], bp
        public_636b5ca : nop
        pop edi
        mov word ptr ds : [esi+0x1A], bp
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636b520)
    }
}

#undef public_636b53b
#undef public_636b568
#undef public_636b575
#undef public_636b57b
#undef public_636b59f
#undef public_636b5ac
#undef public_636b5c3
#undef public_636b5ca
