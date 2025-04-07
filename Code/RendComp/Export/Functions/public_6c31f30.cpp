#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31e40);
CLANG_FORWARD_PROC_SYMBOL(public_6c31e50);
CLANG_FORWARD_PROC_SYMBOL(public_6c31f30);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c31f50 _public_6c31f50
#define public_6c31f5b _public_6c31f5b
#define public_6c31f64 _public_6c31f64
#define public_6c31fb4 _public_6c31fb4
#define public_6c31fc1 _public_6c31fc1
#define public_6c31fc3 _public_6c31fc3
#define public_6c31fdb _public_6c31fdb

PROC_DECLARE(0x6c31f30, internal_6c31f30, public_6c31f30);
extern "C" NAKED register_t __cdecl internal_6c31f30()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6c31f64
        mov edx, dword ptr ds : [eax-4]
        lea esi, ds:[eax-4]
        lea ecx, ds:[eax+edx*8]
        dec edx
        js public_6c31f5b
        lea eax, ds:[edx+1]
        lea esp, ss:[esp]
        public_6c31f50 : nop
        sub ecx, 8
        call public_6c31e50
        dec eax
        jne public_6c31f50
        public_6c31f5b : nop
        push esi
        call public_6c34ea0
        add esp, 4
        public_6c31f64 : nop
        mov eax, dword ptr ds : [edi+0x10]
        push eax
        mov dword ptr ds : [edi], 0
        call public_6c34ea0
        mov esi, dword ptr ss : [esp+0x10]
        add esp, 4
        test esi, esi
        mov dword ptr ds : [edi+0x10], 0
        mov dword ptr ds : [edi+8], 0
        mov dword ptr ds : [edi+4], esi
        je public_6c31fdb
        lea ecx, ds:[esi*8+4]
        push ecx
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c31fc1
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax], esi
        lea eax, ds:[esi-1]
        test eax, eax
        mov ecx, edx
        jl public_6c31fc3
        lea esi, ds:[eax+1]
        public_6c31fb4 : nop
        call public_6c31e40
        add ecx, 8
        dec esi
        jne public_6c31fb4
        jmp public_6c31fc3
        public_6c31fc1 : nop
        xor edx, edx
        public_6c31fc3 : nop
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [edi+4]
        lea eax, ds:[edx*4+4]
        push eax
        call public_6c34eac
        add esp, 4
        mov dword ptr ds : [edi+0x10], eax
        public_6c31fdb : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c31f30)
    }
}

#undef public_6c31f50
#undef public_6c31f5b
#undef public_6c31f64
#undef public_6c31fb4
#undef public_6c31fc1
#undef public_6c31fc3
#undef public_6c31fdb
