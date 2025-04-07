#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366540);
CLANG_FORWARD_PROC_SYMBOL(public_6367480);

#define public_63674bb _public_63674bb
#define public_63674d4 _public_63674d4
#define public_63674dd _public_63674dd
#define public_63674f5 _public_63674f5
#define public_63674fb _public_63674fb
#define public_636751a _public_636751a

PROC_DECLARE(0x6367480, internal_6367480, public_6367480);
extern "C" NAKED register_t __cdecl internal_6367480()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov eax, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [esi+0xC0], ecx
        lea ecx, ds:[esi+0xB0]
        mov dword ptr ds : [esi+0xC4], eax
        call public_6366540
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0xC0], eax
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [esi+0xC4], edx
        jle public_63674d4
        public_63674bb : nop
        mov ecx, dword ptr ds : [esi+0x30]
        fld dword ptr ds : [ecx+eax*4]
        mov edx, dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [edx+eax*4]
        lea ecx, ds:[ecx+eax*4]
        inc eax
        fstp dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x3C]
        cmp eax, ecx
        jl public_63674bb
        public_63674d4 : nop
        mov ecx, dword ptr ds : [esi+0x44]
        xor eax, eax
        test ecx, ecx
        jle public_63674f5
        public_63674dd : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov ecx, dword ptr ds : [esi+0x30]
        mov dword ptr ds : [ecx+edx*4], 0
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_63674dd
        public_63674f5 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        dec eax
        js public_636751a
        public_63674fb : nop
        dec eax
        mov edx, dword ptr ds : [esi+0x30]
        mov edx, dword ptr ds : [edx+eax*4+4]
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ecx+eax*4+4], edx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ds : [ecx+eax*4+4]
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edx+eax*4+4], ecx
        jns public_63674fb
        public_636751a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6367480)
    }
}

#undef public_63674bb
#undef public_63674d4
#undef public_63674dd
#undef public_63674f5
#undef public_63674fb
#undef public_636751a
