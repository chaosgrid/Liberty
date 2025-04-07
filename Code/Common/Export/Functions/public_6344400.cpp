#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344400);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_63526d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352930);
CLANG_FORWARD_PROC_SYMBOL(public_63529e0);

#define public_634443f _public_634443f
#define public_634444e _public_634444e
#define public_634445f _public_634445f
#define public_6344479 _public_6344479
#define public_63444bf _public_63444bf
#define public_63444d2 _public_63444d2
#define public_63444e7 _public_63444e7
#define public_6344507 _public_6344507
#define public_634454d _public_634454d
#define public_6344560 _public_6344560
#define public_6344569 _public_6344569
#define public_6344578 _public_6344578

PROC_DECLARE(0x6344400, internal_6344400, public_6344400);
extern "C" NAKED register_t __cdecl internal_6344400()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        lea eax, ds:[ebx+ebx*4]
        lea eax, ds:[eax+eax*4]
        push edi
        mov edi, ecx
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[ebx+eax*8]
        lea eax, ds:[ebx+ebx*2]
        sar ecx, 0x10
        lea eax, ds:[eax+eax*4]
        lea edx, ds:[eax+eax*4]
        add ecx, edx
        or ecx, 0x80000000
        push ecx
        lea ebp, ds:[edi+0x10]
        push ebx
        mov ecx, ebp
        call public_63523d0
        xor esi, esi
        mov si, word ptr ss : [ebp+0x12]
        dec esi
        js public_634444e
        public_634443f : nop
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        call dword ptr ds : [edx]
        dec esi
        jns public_634443f
        public_634444e : nop
        mov eax, dword ptr ds : [edi+0x28]
        test eax, eax
        je public_63444d2
        mov esi, dword ptr ds : [ebx+0x28]
        cmp esi, dword ptr ds : [edi]
        jne public_634445f
        mov esi, dword ptr ds : [ebx+0x44]
        public_634445f : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        push esi
        call public_6352930
        test eax, eax
        je public_6344479
        mov ecx, dword ptr ds : [edi+0x2C]
        inc eax
        push eax
        push esi
        call public_63529e0
        jmp public_63444d2
        public_6344479 : nop
        mov ecx, dword ptr ds : [edi+0x2C]
        push 1
        push esi
        call public_63526d0
        mov ebp, dword ptr ds : [edi+0x28]
        lea eax, ds:[esi+esi*4]
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*8]
        lea eax, ds:[esi+esi*2]
        sar ecx, 0x10
        lea eax, ds:[eax+eax*4]
        lea edx, ds:[eax+eax*4]
        add ecx, edx
        or ecx, 0x80000000
        push ecx
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        call public_63523d0
        xor eax, eax
        mov ax, word ptr ss : [ebp+0x12]
        mov ebp, eax
        dec ebp
        js public_63444d2
        public_63444bf : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx]
        dec ebp
        jns public_63444bf
        public_63444d2 : nop
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        je public_6344560
        mov eax, dword ptr ds : [ebx+0x28]
        cmp eax, dword ptr ds : [edi]
        jne public_63444e7
        mov eax, dword ptr ds : [ebx+0x44]
        public_63444e7 : nop
        mov esi, dword ptr ds : [eax+0x98]
        mov ecx, dword ptr ds : [edi+0x30]
        push esi
        call public_6352930
        test eax, eax
        je public_6344507
        mov ecx, dword ptr ds : [edi+0x30]
        inc eax
        push eax
        push esi
        call public_63529e0
        jmp public_6344560
        public_6344507 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        push 1
        push esi
        call public_63526d0
        mov ebp, dword ptr ds : [edi+0x34]
        lea eax, ds:[esi+esi*4]
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*8]
        lea eax, ds:[esi+esi*2]
        sar ecx, 0x10
        lea eax, ds:[eax+eax*4]
        lea edx, ds:[eax+eax*4]
        add ecx, edx
        or ecx, 0x80000000
        push ecx
        push esi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], ebp
        call public_63523d0
        xor eax, eax
        mov ax, word ptr ss : [ebp+0x12]
        mov ebp, eax
        dec ebp
        js public_6344560
        public_634454d : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx]
        dec ebp
        jns public_634454d
        public_6344560 : nop
        xor esi, esi
        mov si, word ptr ds : [edi+0xA]
        dec esi
        js public_6344578
        public_6344569 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+esi*4]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        call dword ptr ds : [edx]
        dec esi
        jns public_6344569
        public_6344578 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6344400)
    }
}

#undef public_634443f
#undef public_634444e
#undef public_634445f
#undef public_6344479
#undef public_63444bf
#undef public_63444d2
#undef public_63444e7
#undef public_6344507
#undef public_634454d
#undef public_6344560
#undef public_6344569
#undef public_6344578
