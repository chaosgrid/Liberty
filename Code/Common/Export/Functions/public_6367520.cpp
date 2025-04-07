#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366b10);
CLANG_FORWARD_PROC_SYMBOL(public_6367130);
CLANG_FORWARD_PROC_SYMBOL(public_63673a0);
CLANG_FORWARD_PROC_SYMBOL(public_6367480);
CLANG_FORWARD_PROC_SYMBOL(public_6367520);
CLANG_FORWARD_PROC_SYMBOL(public_6368230);

#define public_636754a _public_636754a
#define public_6367558 _public_6367558
#define public_636756e _public_636756e
#define public_636757e _public_636757e
#define public_636759b _public_636759b
#define public_63675a5 _public_63675a5
#define public_6367604 _public_6367604
#define public_6367626 _public_6367626
#define public_636762f _public_636762f
#define public_6367643 _public_6367643
#define public_636764f _public_636764f

PROC_DECLARE(0x6367520, internal_6367520, public_6367520);
extern "C" NAKED register_t __cdecl internal_6367520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ecx, ds:[eax+3]
        and ecx, 0xFFFFFFFC
        mov dword ptr ds : [esi+0x48], ecx
        mov ecx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi+0x94], eax
        xor ebx, ebx
        xor eax, eax
        cmp ecx, ebx
        push edi
        jle public_6367558
        public_636754a : nop
        mov edx, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edx+eax*4], ebx
        mov ecx, dword ptr ds : [esi+0x40]
        inc eax
        cmp eax, ecx
        jl public_636754a
        public_6367558 : nop
        mov ecx, esi
        call public_63673a0
        cmp eax, 1
        jne public_6367643
        mov dword ptr ds : [esi+0x68], ebx
        lea ebp, ds:[esi+0x6C]
        public_636756e : nop
        mov ecx, ebp
        call public_6368230
        mov ecx, dword ptr ds : [esi+0x44]
        xor eax, eax
        cmp ecx, ebx
        jle public_636759b
        public_636757e : nop
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [esi+0x34]
        mov ecx, dword ptr ds : [ecx+eax*4]
        mov edx, dword ptr ds : [edx+eax*4]
        mov edi, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [edi+edx*4], ecx
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_636757e
        public_636759b : nop
        mov ecx, esi
        call public_6367480
        mov edi, dword ptr ds : [esi+0x44]
        public_63675a5 : nop
        dec edi
        cmp edi, ebx
        jl public_636764f
        mov edx, dword ptr ds : [esi+0x34]
        mov eax, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [edx+edi*4]
        fld dword ptr ds : [eax+ecx*4]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63675a5
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edx+ecx*4], ebx
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [eax+ecx*4], ebx
        mov eax, dword ptr ds : [esi+0x44]
        mov edx, dword ptr ds : [esi+0x4C]
        dec eax
        push edi
        dec edx
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x4C], edx
        call public_6367130
        push edi
        mov ecx, esi
        call public_6366b10
        cmp dword ptr ds : [esi+0x68], ebx
        jg public_6367626
        mov ecx, dword ptr ds : [esi+0x44]
        xor eax, eax
        cmp ecx, ebx
        jle public_636756e
        public_6367604 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [ecx+eax*4]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+edx*4]
        mov edi, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [edi+eax*4], edx
        mov ecx, dword ptr ds : [esi+0x44]
        inc eax
        cmp eax, ecx
        jl public_6367604
        jmp public_636756e
        public_6367626 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        xor eax, eax
        cmp ecx, ebx
        jle public_6367643
        public_636762f : nop
        mov ecx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ecx+eax*4], ebx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edx+eax*4], ebx
        mov ecx, dword ptr ds : [esi+0x3C]
        inc eax
        cmp eax, ecx
        jl public_636762f
        public_6367643 : nop
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x94], ebx
        public_636764f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6367520)
    }
}

#undef public_636754a
#undef public_6367558
#undef public_636756e
#undef public_636757e
#undef public_636759b
#undef public_63675a5
#undef public_6367604
#undef public_6367626
#undef public_636762f
#undef public_6367643
#undef public_636764f
