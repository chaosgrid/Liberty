#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ad74);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ae5e);

#define public_6d4ae8e _public_6d4ae8e
#define public_6d4ae96 _public_6d4ae96
#define public_6d4ae99 _public_6d4ae99
#define public_6d4aec3 _public_6d4aec3
#define public_6d4aee1 _public_6d4aee1
#define public_6d4aefe _public_6d4aefe
#define public_6d4af29 _public_6d4af29
#define public_6d4af2e _public_6d4af2e
#define public_6d4af43 _public_6d4af43
#define public_6d4af44 _public_6d4af44

PROC_DECLARE(0x6d4ae5e, internal_6d4ae5e, public_6d4ae5e);
extern "C" NAKED register_t __cdecl internal_6d4ae5e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        mov ebx, dword ptr ss : [ebp+0x18]
        cmp eax, ebx
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-4], ebx
        jge public_6d4ae96
        push ebx
        push eax
        push dword ptr ss : [ebp+0xC]
        push edi
        call public_6d4ad74
        add esp, 0x10
        test al, al
        jne public_6d4ae8e
        or eax, 0xFFFFFFFF
        jmp public_6d4af44
        public_6d4ae8e : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edi+0x18]
        jmp public_6d4ae99
        public_6d4ae96 : nop
        mov edx, dword ptr ss : [ebp+0xC]
        public_6d4ae99 : nop
        sub eax, ebx
        push esi
        mov ecx, eax
        mov esi, edx
        sar esi, cl
        xor ecx, ecx
        inc ecx
        mov dword ptr ss : [ebp+0x10], ecx
        mov ecx, ebx
        mov ebx, dword ptr ss : [ebp+0x10]
        shl ebx, cl
        mov ecx, dword ptr ss : [ebp+0x18]
        dec ebx
        and esi, ebx
        mov ebx, dword ptr ss : [ebp+0x14]
        lea ecx, ds:[ebx+ecx*4+0x44]
        cmp esi, dword ptr ds : [ecx]
        jle public_6d4aefe
        mov dword ptr ss : [ebp+0x18], ecx
        public_6d4aec3 : nop
        shl esi, 1
        cmp eax, 1
        jge public_6d4aee1
        push 1
        push eax
        push edx
        push edi
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4af29
        mov edx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [edi+0x18]
        public_6d4aee1 : nop
        add dword ptr ss : [ebp+0x18], 4
        dec eax
        mov ecx, eax
        mov ebx, edx
        sar ebx, cl
        mov ecx, dword ptr ss : [ebp+0x18]
        and ebx, 1
        or esi, ebx
        inc dword ptr ss : [ebp-4]
        cmp esi, dword ptr ds : [ecx]
        jg public_6d4aec3
        mov ebx, dword ptr ss : [ebp+0x14]
        public_6d4aefe : nop
        mov dword ptr ds : [edi+0x18], eax
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, 0x10
        mov dword ptr ds : [edi+0xC], edx
        jle public_6d4af2e
        mov eax, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x14], 0x72
        mov edi, dword ptr ds : [edi+0x1C]
        mov eax, dword ptr ds : [edi]
        push 0xFFFFFFFF
        push edi
        call dword ptr ds : [eax+4]
        pop ecx
        pop ecx
        xor eax, eax
        jmp public_6d4af43
        public_6d4af29 : nop
        or eax, 0xFFFFFFFF
        jmp public_6d4af43
        public_6d4af2e : nop
        mov ecx, dword ptr ds : [ebx+eax*4+0x8C]
        sub ecx, dword ptr ds : [ebx+eax*4]
        add ecx, dword ptr ds : [ebx+0xD0]
        movzx eax, byte ptr ds : [ecx+esi+0x11]
        public_6d4af43 : nop
        pop esi
        public_6d4af44 : nop
        pop edi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4ae5e)
    }
}

#undef public_6d4ae8e
#undef public_6d4ae96
#undef public_6d4ae99
#undef public_6d4aec3
#undef public_6d4aee1
#undef public_6d4aefe
#undef public_6d4af29
#undef public_6d4af2e
#undef public_6d4af43
#undef public_6d4af44
