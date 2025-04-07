#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450680);
CLANG_FORWARD_PROC_SYMBOL(public_556cb0);
CLANG_FORWARD_PROC_SYMBOL(public_556cc0);
CLANG_FORWARD_PROC_SYMBOL(public_556ce0);
CLANG_FORWARD_PROC_SYMBOL(public_556e00);
CLANG_FORWARD_PROC_SYMBOL(public_556f10);

#define public_450720 _public_450720
#define public_45073c _public_45073c
#define public_450797 _public_450797

PROC_DECLARE(0x450680, internal_450680, public_450680);
extern "C" NAKED register_t __cdecl internal_450680()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        cmp edx, dword ptr ds : [ecx+0x4600]
        sete byte ptr ss : [esp+0x14]
        xor ebx, ebx
        push esi
        mov eax, edx
        shl eax, 6
        add eax, ecx
        mov dword ptr ds : [eax], ebx
        lea esi, ds:[eax+4]
        push edi
        mov edi, ebx
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [eax+0x2C], ebx
        mov dword ptr ds : [eax+0x28], ebx
        mov dword ptr ds : [eax+0x24], ebx
        mov dword ptr ds : [eax+0x1C], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov esi, 0x3F800000
        mov dword ptr ds : [eax+0x30], esi
        mov dword ptr ds : [eax+0x20], esi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x34], 0x420C0000
        mov dword ptr ds : [eax+0x38], 0x3E800000
        mov dword ptr ds : [eax+0x3C], 0x49742400
        mov al, byte ptr ss : [esp+0x1C]
        or esi, 0xFFFFFFFF
        cmp al, bl
        mov dword ptr ds : [ecx+edx*4+0x4000], esi
        mov dword ptr ss : [esp+0xC], ebx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ds : [edx+ecx+0x4400], bl
        mov byte ptr ds : [edx+ecx+0x4500], bl
        je public_450797
        push ebp
        mov ebp, 0xFFFFFF00
        xor eax, eax
        lea edi, ds:[ecx+0x4000]
        public_450720 : nop
        cmp byte ptr ds : [ecx+eax+0x4500], bl
        je public_45073c
        cmp byte ptr ds : [eax+ecx+0x4400], bl
        je public_45073c
        mov edx, dword ptr ds : [edi]
        cmp edx, ebp
        jle public_45073c
        mov ebp, edx
        mov esi, eax
        public_45073c : nop
        inc eax
        add edi, 4
        cmp eax, 0x100
        jl public_450720
        cmp esi, 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x4600], esi
        pop ebp
        je public_450797
        shl esi, 6
        add esi, ecx
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[esi+4]
        push eax
        push ecx
        call public_556cb0
        mov eax, dword ptr ds : [esi]
        lea edx, ds:[esi+0x10]
        push edx
        push eax
        call public_556cc0
        mov ecx, dword ptr ds : [esi+0x34]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        call public_556ce0
        mov eax, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        call public_556e00
        mov edx, dword ptr ds : [esi+0x3C]
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        call public_556f10
        add esp, 0x28
        public_450797 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x450680)
    }
}

#undef public_450720
#undef public_45073c
#undef public_450797
