#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634fec0);
CLANG_FORWARD_PROC_SYMBOL(public_63609f0);

#define public_634fee4 _public_634fee4
#define public_634fef1 _public_634fef1
#define public_634ff00 _public_634ff00
#define public_634ff06 _public_634ff06
#define public_634ff13 _public_634ff13
#define public_634ff22 _public_634ff22
#define public_634ff2b _public_634ff2b
#define public_634ff38 _public_634ff38
#define public_634ff47 _public_634ff47
#define public_634ff50 _public_634ff50
#define public_634ff5f _public_634ff5f
#define public_634ff70 _public_634ff70
#define public_634ff8d _public_634ff8d

PROC_DECLARE(0x634fec0, internal_634fec0, public_634fec0);
extern "C" NAKED register_t __cdecl internal_634fec0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0xFFFF
        push edi
        mov edi, ecx
        je public_634fee4
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+4]
        push esi
        call public_63609f0
        mov dword ptr ds : [esi+4], 0xFFFF
        public_634fee4 : nop
        mov eax, dword ptr ds : [esi+0x74]
        test eax, eax
        je public_634fef1
        mov ecx, dword ptr ds : [esi+0x78]
        mov dword ptr ds : [eax+0x78], ecx
        public_634fef1 : nop
        mov eax, dword ptr ds : [esi+0x78]
        test eax, eax
        je public_634ff00
        mov edx, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [eax+0x74], edx
        jmp public_634ff06
        public_634ff00 : nop
        mov eax, dword ptr ds : [esi+0x74]
        mov dword ptr ds : [edi+8], eax
        public_634ff06 : nop
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_634ff13
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+0xC], ecx
        public_634ff13 : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_634ff22
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+8], edx
        jmp public_634ff2b
        public_634ff22 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+0x20], ecx
        public_634ff2b : nop
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_634ff38
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [eax+0xC], edx
        public_634ff38 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_634ff47
        mov ecx, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [eax+8], ecx
        jmp public_634ff50
        public_634ff47 : nop
        mov edx, dword ptr ds : [esi+0x44]
        mov eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ds : [edx+0x20], eax
        public_634ff50 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0xE]
        dec eax
        js public_634ff8d
        mov ecx, dword ptr ds : [edi+0x10]
        lea ecx, ds:[ecx+eax*4]
        public_634ff5f : nop
        cmp dword ptr ds : [ecx], esi
        je public_634ff70
        dec eax
        sub ecx, 4
        test eax, eax
        jge public_634ff5f
        pop edi
        pop esi
        ret 4
        public_634ff70 : nop
        test eax, eax
        jl public_634ff8d
        dec word ptr ds : [edi+0xE]
        mov edx, dword ptr ds : [edi+0x10]
        xor ecx, ecx
        mov cx, word ptr ds : [edi+0xE]
        and ecx, 0xFFFF
        mov ecx, dword ptr ds : [edx+ecx*4]
        mov dword ptr ds : [edx+eax*4], ecx
        public_634ff8d : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634fec0)
    }
}

#undef public_634fee4
#undef public_634fef1
#undef public_634ff00
#undef public_634ff06
#undef public_634ff13
#undef public_634ff22
#undef public_634ff2b
#undef public_634ff38
#undef public_634ff47
#undef public_634ff50
#undef public_634ff5f
#undef public_634ff70
#undef public_634ff8d
