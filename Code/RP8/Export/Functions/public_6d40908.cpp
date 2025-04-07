#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40908);

#define public_6d40936 _public_6d40936
#define public_6d40951 _public_6d40951
#define public_6d40977 _public_6d40977
#define public_6d4099c _public_6d4099c
#define public_6d409b9 _public_6d409b9
#define public_6d409cb _public_6d409cb
#define public_6d40a01 _public_6d40a01
#define public_6d40a1c _public_6d40a1c
#define public_6d40a41 _public_6d40a41
#define public_6d40a5e _public_6d40a5e
#define public_6d40a76 _public_6d40a76
#define public_6d40a93 _public_6d40a93
#define public_6d40ae5 _public_6d40ae5
#define public_6d40afc _public_6d40afc
#define public_6d40b20 _public_6d40b20
#define public_6d40b3c _public_6d40b3c
#define public_6d40b40 _public_6d40b40
#define public_6d40b48 _public_6d40b48
#define public_6d40bb6 _public_6d40bb6

PROC_DECLARE(0x6d40908, internal_6d40908, public_6d40908);
extern "C" NAKED register_t __cdecl internal_6d40908()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ds : [esi+0x190]
        cmp byte ptr ds : [eax+0x51], 0
        push edi
        mov edi, dword ptr ds : [ebx]
        jne public_6d40936
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x3D
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d40936 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d40951
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40b3c
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40951 : nop
        dec dword ptr ss : [ebp-4]
        xor eax, eax
        mov ah, byte ptr ds : [edi]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-8], eax
        jne public_6d40977
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40b3c
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40977 : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        add dword ptr ss : [ebp-8], eax
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d4099c
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40b3c
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d4099c : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        lea ecx, ds:[eax+eax+6]
        inc edi
        cmp dword ptr ss : [ebp-8], ecx
        mov dword ptr ss : [ebp-0x18], eax
        jne public_6d409b9
        cmp eax, 1
        jl public_6d409b9
        cmp eax, 4
        jle public_6d409cb
        public_6d409b9 : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 9
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x18]
        pop ecx
        public_6d409cb : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0x66
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [ebp-0x18]
        and dword ptr ss : [ebp-0x14], 0
        test eax, eax
        pop ecx
        pop ecx
        mov dword ptr ds : [esi+0x120], eax
        jle public_6d40ae5
        lea eax, ds:[esi+0x124]
        mov dword ptr ss : [ebp-0x10], eax
        public_6d40a01 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d40a1c
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40b3c
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40a1c : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0xC], eax
        jne public_6d40a41
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40b3c
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40a41 : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        and dword ptr ss : [ebp-8], 0
        mov ecx, dword ptr ds : [esi+0xC4]
        inc edi
        cmp dword ptr ds : [esi+0x20], 0
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x1C], ecx
        jle public_6d40a76
        public_6d40a5e : nop
        mov edx, dword ptr ss : [ebp-0xC]
        cmp edx, dword ptr ds : [ecx]
        je public_6d40a93
        inc dword ptr ss : [ebp-8]
        mov edx, dword ptr ss : [ebp-8]
        add ecx, 0x54
        cmp edx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [ebp-0x1C], ecx
        jl public_6d40a5e
        public_6d40a76 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [eax+0x14], 5
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x18], ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x20]
        pop ecx
        mov ecx, dword ptr ss : [ebp-0x1C]
        public_6d40a93 : nop
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx], ecx
        mov edx, eax
        sar edx, 4
        and eax, 0xF
        mov dword ptr ds : [ecx+0x18], eax
        and edx, 0xF
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [ebp-0xC]
        add eax, 0x18
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x67
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        inc dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-0x14]
        add dword ptr ss : [ebp-0x10], 4
        cmp eax, dword ptr ss : [ebp-0x18]
        pop ecx
        pop ecx
        jl public_6d40a01
        public_6d40ae5 : nop
        cmp dword ptr ss : [ebp-4], 0
        jne public_6d40afc
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40b3c
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40afc : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [esi+0x168], eax
        jne public_6d40b20
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        je public_6d40b3c
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40b20 : nop
        movzx eax, byte ptr ds : [edi]
        dec dword ptr ss : [ebp-4]
        inc edi
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ds : [esi+0x16C], eax
        jne public_6d40b48
        push esi
        call dword ptr ds : [ebx+0xC]
        test al, al
        pop ecx
        jne public_6d40b40
        public_6d40b3c : nop
        xor al, al
        jmp public_6d40bb6
        public_6d40b40 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ebx]
        mov dword ptr ss : [ebp-4], eax
        public_6d40b48 : nop
        movzx eax, byte ptr ds : [edi]
        mov ecx, eax
        sar ecx, 4
        and eax, 0xF
        mov dword ptr ds : [esi+0x174], eax
        mov eax, dword ptr ds : [esi]
        and ecx, 0xF
        mov dword ptr ds : [esi+0x170], ecx
        mov ecx, dword ptr ds : [esi+0x168]
        add eax, 0x18
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [esi+0x16C]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [esi+0x170]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ds : [esi+0x174]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+0x14], 0x68
        mov eax, dword ptr ds : [esi]
        push 1
        push esi
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+0x190]
        and dword ptr ds : [eax+0x54], 0
        inc dword ptr ds : [esi+0x7C]
        mov eax, dword ptr ss : [ebp-4]
        inc edi
        dec eax
        pop ecx
        mov dword ptr ds : [ebx+4], eax
        pop ecx
        mov dword ptr ds : [ebx], edi
        mov al, 1
        public_6d40bb6 : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d40908)
    }
}

#undef public_6d40936
#undef public_6d40951
#undef public_6d40977
#undef public_6d4099c
#undef public_6d409b9
#undef public_6d409cb
#undef public_6d40a01
#undef public_6d40a1c
#undef public_6d40a41
#undef public_6d40a5e
#undef public_6d40a76
#undef public_6d40a93
#undef public_6d40ae5
#undef public_6d40afc
#undef public_6d40b20
#undef public_6d40b3c
#undef public_6d40b40
#undef public_6d40b48
#undef public_6d40bb6
