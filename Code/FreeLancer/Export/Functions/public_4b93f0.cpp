#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438160);
CLANG_FORWARD_PROC_SYMBOL(public_4381c0);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_4b93f0);
CLANG_FORWARD_PROC_SYMBOL(public_4c55d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4b9435 _public_4b9435
#define public_4b9497 _public_4b9497
#define public_4b94aa _public_4b94aa
#define public_4b94c0 _public_4b94c0
#define public_4b94e0 _public_4b94e0
#define public_4b9550 _public_4b9550
#define public_4b9567 _public_4b9567
#define public_4b9580 _public_4b9580
#define public_4b9600 _public_4b9600
#define public_4b969f _public_4b969f

PROC_DECLARE(0x4b93f0, internal_4b93f0, public_4b93f0);
extern "C" NAKED register_t __cdecl internal_4b93f0()
{
    __asm
    {
        sub esp, 0x20C
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        call public_4c55d0
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ds : [ebx+0x420], eax
        mov eax, dword ptr ds : [public_66873c]
        push eax
        mov ecx, offset public_668708
        call public_43a510
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ebx+0x3CC]
        xor ebp, ebp
        test eax, eax
        jle public_4b94c0
        lea esi, ds:[ebx+0x3FC]
        public_4b9435 : nop
        mov edi, dword ptr ds : [esi-0x3C]
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi], 0
        call public_438160
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        call public_4381c0
        fld dword ptr ss : [esp+0x18]
        call public_5b7ec0
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jl public_4b9497
        cmp eax, 0x3E7
        jge public_4b9497
        fild dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_4b9497
        fstp st(0)
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_4b94aa
        mov dword ptr ds : [esi], 1
        jmp public_4b94aa
        public_4b9497 : nop
        fcomp dword ptr ds : [ebx+0x3F8]
        fnstsw ax
        test ah, 0x41
        jne public_4b94aa
        mov dword ptr ds : [esi], 2
        public_4b94aa : nop
        mov eax, dword ptr ds : [ebx+0x3CC]
        inc ebp
        add esi, 4
        cmp ebp, eax
        jl public_4b9435
        lea esp, ss:[esp]
        public_4b94c0 : nop
        mov eax, dword ptr ds : [ebx+0x3CC]
        xor edi, edi
        dec eax
        test eax, eax
        mov dl, 1
        jle public_4b9567
        lea eax, ds:[ebx+0x400]
        lea esp, ss:[esp]
        public_4b94e0 : nop
        mov ecx, dword ptr ds : [eax-4]
        mov esi, dword ptr ds : [eax]
        cmp ecx, esi
        jle public_4b9550
        mov dword ptr ds : [eax-4], esi
        mov esi, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [eax+8], esi
        mov esi, dword ptr ds : [eax-0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov ecx, dword ptr ds : [eax-0x14]
        mov dword ptr ds : [eax-0x14], esi
        mov esi, dword ptr ds : [eax-0x54]
        mov dword ptr ds : [eax-0x10], ecx
        mov ecx, dword ptr ds : [eax-0x58]
        mov dword ptr ds : [eax-0x58], esi
        mov esi, dword ptr ds : [eax-0x48]
        mov dword ptr ds : [eax-0x54], ecx
        mov ecx, dword ptr ds : [eax-0x4C]
        mov dword ptr ds : [eax-0x4C], esi
        mov esi, dword ptr ds : [eax-0x3C]
        mov dword ptr ds : [eax-0x48], ecx
        mov ecx, dword ptr ds : [eax-0x40]
        mov dword ptr ds : [eax-0x40], esi
        mov esi, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [eax-0x3C], ecx
        mov ecx, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [eax+0x24], esi
        mov esi, dword ptr ds : [eax+0x34]
        mov dword ptr ds : [eax+0x28], ecx
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ds : [eax+0x30], esi
        mov esi, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [eax+0x34], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        xor dl, dl
        mov dword ptr ds : [eax+0x14], esi
        mov dword ptr ds : [eax+0x18], ecx
        public_4b9550 : nop
        mov ecx, dword ptr ds : [ebx+0x3CC]
        inc edi
        add eax, 4
        dec ecx
        cmp edi, ecx
        jl public_4b94e0
        test dl, dl
        je public_4b94c0
        public_4b9567 : nop
        mov eax, dword ptr ds : [ebx+0x3CC]
        xor ebp, ebp
        test eax, eax
        jle public_4b969f
        lea esi, ds:[ebx+0x34C]
        lea ecx, ds:[ecx]
        public_4b9580 : nop
        mov eax, dword ptr ds : [esi+0xD8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [eax*4+public_611f78]
        mov ecx, dword ptr ds : [esi+0xF0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x5C]
        push 0xFFFFFFFF
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_4779a0
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push 0
        lea edx, ss:[esp+0x20]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB0]
        xor al, al
        test ecx, ecx
        je public_4b9600
        mov al, 1
        public_4b9600 : nop
        mov ecx, dword ptr ds : [esi-0x18]
        movzx edi, al
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        mov byte ptr ss : [esp+0x1C], 0x80
        mov byte ptr ss : [esp+0x1D], 0x80
        mov byte ptr ss : [esp+0x1E], 0x80
        mov byte ptr ss : [esp+0x1F], 0xFF
        mov eax, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi-0xC]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        mov byte ptr ss : [esp+0x18], 0xC0
        mov byte ptr ss : [esp+0x19], 0xC0
        mov byte ptr ss : [esp+0x1A], 0xC0
        mov byte ptr ss : [esp+0x1B], 0xFF
        mov eax, dword ptr ds : [ecx]
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ss:[esp+0x14]
        push edx
        push 0x33
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [ebx+0x3CC]
        inc ebp
        add esi, 4
        cmp ebp, eax
        jl public_4b9580
        public_4b969f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20C
        ret 
        UNREACHABLE_TRAP(0x4b93f0)
    }
}

#undef public_4b9435
#undef public_4b9497
#undef public_4b94aa
#undef public_4b94c0
#undef public_4b94e0
#undef public_4b9550
#undef public_4b9567
#undef public_4b9580
#undef public_4b9600
#undef public_4b969f
