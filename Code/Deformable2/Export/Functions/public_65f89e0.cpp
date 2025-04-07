#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f7590);
CLANG_FORWARD_PROC_SYMBOL(public_65f75f0);
CLANG_FORWARD_PROC_SYMBOL(public_65f7760);
CLANG_FORWARD_PROC_SYMBOL(public_65f7e80);
CLANG_FORWARD_PROC_SYMBOL(public_65f8480);
CLANG_FORWARD_PROC_SYMBOL(public_65f89e0);
CLANG_FORWARD_PROC_SYMBOL(public_65f96b0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f89f7 _public_65f89f7
#define public_65f8a08 _public_65f8a08
#define public_65f8a19 _public_65f8a19
#define public_65f8a60 _public_65f8a60
#define public_65f8a71 _public_65f8a71
#define public_65f8a75 _public_65f8a75
#define public_65f8a77 _public_65f8a77
#define public_65f8a83 _public_65f8a83
#define public_65f8a90 _public_65f8a90
#define public_65f8abc _public_65f8abc
#define public_65f8ac4 _public_65f8ac4

PROC_DECLARE(0x65f89e0, internal_65f89e0, public_65f89e0);
extern "C" NAKED register_t __cdecl internal_65f89e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov ebx, ecx
        call public_65f7760
        test al, al
        jne public_65f89f7
        pop esi
        pop ebx
        ret 8
        public_65f89f7 : nop
        push esi
        mov ecx, ebx
        call public_65f7e80
        test al, al
        jne public_65f8a08
        pop esi
        pop ebx
        ret 8
        public_65f8a08 : nop
        push esi
        mov ecx, ebx
        call public_65f8480
        test al, al
        jne public_65f8a19
        pop esi
        pop ebx
        ret 8
        public_65f8a19 : nop
        push ebp
        push edi
        push ebx
        call public_65f7590
        push ebx
        call public_65f75f0
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [eax+8]
        mov ecx, edi
        shl ecx, 4
        add ecx, 4
        push ecx
        call public_6600bb6
        xor esi, esi
        add esp, 0xC
        cmp eax, esi
        je public_65f8a75
        lea ecx, ds:[edi-1]
        cmp ecx, esi
        lea edx, ds:[eax+4]
        mov dword ptr ds : [eax], edi
        mov eax, edx
        jl public_65f8a71
        lea edi, ds:[ecx+1]
        mov cl, byte ptr ss : [esp+0x18]
        lea ebx, ds:[ebx]
        public_65f8a60 : nop
        mov byte ptr ds : [eax], cl
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], esi
        add eax, 0x10
        dec edi
        jne public_65f8a60
        public_65f8a71 : nop
        mov eax, edx
        jmp public_65f8a77
        public_65f8a75 : nop
        xor eax, eax
        public_65f8a77 : nop
        mov dword ptr ds : [ebx+0x34], eax
        mov eax, dword ptr ds : [ebx+0x24]
        xor ebp, ebp
        cmp eax, esi
        jbe public_65f8ac4
        public_65f8a83 : nop
        mov edx, dword ptr ds : [ebx+0x30]
        mov eax, dword ptr ds : [edx+ebp*8]
        cmp eax, esi
        lea edi, ds:[edx+ebp*8]
        jle public_65f8abc
        public_65f8a90 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+esi*8]
        mov edx, dword ptr ds : [ebx+0x34]
        shl ecx, 4
        mov eax, dword ptr ds : [ecx+edx+8]
        add ecx, edx
        lea edx, ss:[esp+0x18]
        push edx
        push 1
        push eax
        mov dword ptr ss : [esp+0x24], ebp
        call public_65f96b0
        mov eax, dword ptr ds : [edi]
        inc esi
        cmp esi, eax
        jl public_65f8a90
        xor esi, esi
        public_65f8abc : nop
        mov eax, dword ptr ds : [ebx+0x24]
        inc ebp
        cmp ebp, eax
        jb public_65f8a83
        public_65f8ac4 : nop
        mov eax, dword ptr ds : [ebx+0x24]
        push eax
        mov dword ptr ds : [ebx+0x3C], eax
        call public_6600bb6
        mov dword ptr ds : [ebx+0x38], eax
        mov ecx, dword ptr ds : [ebx+0x3C]
        mov edi, dword ptr ds : [ebx+0x38]
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        rep stosd
        add esp, 4
        mov ecx, edx
        and ecx, 3
        rep stosb
        pop edi
        pop ebp
        pop esi
        mov dword ptr ds : [ebx+0xC], 0x112
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65f89e0)
    }
}

#undef public_65f89f7
#undef public_65f8a08
#undef public_65f8a19
#undef public_65f8a60
#undef public_65f8a71
#undef public_65f8a75
#undef public_65f8a77
#undef public_65f8a83
#undef public_65f8a90
#undef public_65f8abc
#undef public_65f8ac4
