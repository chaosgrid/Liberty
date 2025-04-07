#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62a92e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a9420);
CLANG_FORWARD_PROC_SYMBOL(public_62b5b60);

#define public_62a9330 _public_62a9330
#define public_62a9341 _public_62a9341
#define public_62a938e _public_62a938e
#define public_62a93b8 _public_62a93b8
#define public_62a93cb _public_62a93cb
#define public_62a93d1 _public_62a93d1
#define public_62a9404 _public_62a9404

PROC_DECLARE(0x62a92e0, internal_62a92e0, public_62a92e0);
extern "C" NAKED register_t __cdecl internal_62a92e0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call public_62b5b60
        mov eax, dword ptr ds : [ebx+0x60]
        mov dword ptr ds : [esi+0x104], eax
        mov edx, dword ptr ds : [ebx+0x64]
        lea ecx, ds:[ebx+0x64]
        lea eax, ds:[esi+0x108]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x30]
        xor edi, edi
        test edx, edx
        mov dword ptr ds : [eax+0x30], edx
        jle public_62a9341
        lea edx, ds:[eax+0x10]
        sub ecx, eax
        push ebp
        lea ecx, ds:[ecx]
        public_62a9330 : nop
        mov ebp, dword ptr ds : [ecx+edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+0x30]
        inc edi
        add edx, 4
        cmp edi, ebp
        jl public_62a9330
        pop ebp
        public_62a9341 : nop
        mov eax, dword ptr ds : [ebx+0x98]
        lea ecx, ds:[ebx+0xAC]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x13C], eax
        call public_62a9420
        mov edx, dword ptr ds : [esi]
        push 1
        add ebx, 0x9C
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0xA4]
        lea ebx, ds:[esi+0xE4]
        push 0x200
        mov ecx, ebx
        call public_629b720
        test eax, eax
        je public_62a938e
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x108]
        public_62a938e : nop
        push 0x40000
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x19C], 0
        call public_629b990
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebx
        call public_629b440
        mov edi, eax
        test edi, edi
        je public_62a9404
        public_62a93b8 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        test al, al
        je public_62a93cb
        fld dword ptr ds : [public_6399408]
        jmp public_62a93d1
        public_62a93cb : nop
        mov eax, dword ptr ds : [edi+0xC]
        fld dword ptr ds : [eax+0x70]
        public_62a93d1 : nop
        fadd dword ptr ds : [esi+0x19C]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, ebx
        fstp dword ptr ds : [esi+0x19C]
        call public_629b440
        mov edi, eax
        test edi, edi
        jne public_62a93b8
        mov edx, dword ptr ds : [esi+0x19C]
        pop edi
        mov dword ptr ds : [esi+0x198], edx
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        public_62a9404 : nop
        mov eax, dword ptr ds : [esi+0x19C]
        pop edi
        mov dword ptr ds : [esi+0x198], eax
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62a92e0)
    }
}

#undef public_62a9330
#undef public_62a9341
#undef public_62a938e
#undef public_62a93b8
#undef public_62a93cb
#undef public_62a93d1
#undef public_62a9404
