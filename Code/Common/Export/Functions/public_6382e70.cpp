#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377e60);
CLANG_FORWARD_PROC_SYMBOL(public_6377fe0);
CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6382e70);

#define public_6382ebb _public_6382ebb
#define public_6382ec0 _public_6382ec0
#define public_6382ee3 _public_6382ee3
#define public_6382efd _public_6382efd
#define public_6382eff _public_6382eff
#define public_6382f0d _public_6382f0d
#define public_6382f2b _public_6382f2b
#define public_6382f41 _public_6382f41
#define public_6382f43 _public_6382f43
#define public_6382f56 _public_6382f56
#define public_6382f5e _public_6382f5e
#define public_6382f62 _public_6382f62
#define public_6382fae _public_6382fae
#define public_6382fc0 _public_6382fc0
#define public_6382fcb _public_6382fcb

PROC_DECLARE(0x6382e70, internal_6382e70, public_6382e70);
extern "C" NAKED register_t __cdecl internal_6382e70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658b24c]
        push ebx
        push esi
        lea ecx, ds:[eax*4]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x14], 0
        call public_6377e60
        mov esi, eax
        mov eax, dword ptr ds : [public_658b81c]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], esi
        je public_6382fcb
        mov edi, eax
        test edi, edi
        je public_6382fcb
        mov ebx, dword ptr ss : [ebp+0x10]
        jmp public_6382ec0
        public_6382ebb : nop
        mov eax, dword ptr ds : [public_658b81c]
        public_6382ec0 : nop
        mov ecx, dword ptr ds : [edi+0x30]
        test ecx, ecx
        je public_6382fcb
        cmp edi, eax
        jne public_6382f0d
        mov ecx, dword ptr ds : [public_658b24c]
        mov edx, ecx
        dec ecx
        test edx, edx
        je public_6382f62
        lea edx, ds:[esi+ecx*4]
        public_6382ee3 : nop
        mov eax, dword ptr ds : [edi+0x18]
        fld qword ptr ds : [eax+ecx*8]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x41
        jne public_6382efd
        mov eax, 1
        jmp public_6382eff
        public_6382efd : nop
        xor eax, eax
        public_6382eff : nop
        mov dword ptr ds : [edx], eax
        mov eax, ecx
        dec ecx
        sub edx, 4
        test eax, eax
        jne public_6382ee3
        jmp public_6382f62
        public_6382f0d : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_6382f62
        mov ecx, dword ptr ds : [public_658b24c]
        mov edx, ecx
        dec ecx
        test edx, edx
        je public_6382f62
        mov eax, dword ptr ds : [edi+0x18]
        lea edx, ds:[esi+ecx*4]
        lea esi, ds:[eax+ecx*8]
        public_6382f2b : nop
        fld qword ptr ds : [esi]
        fcomp qword ptr ds : [public_63a58b0]
        fnstsw ax
        test ah, 0x41
        jne public_6382f41
        mov eax, 1
        jmp public_6382f43
        public_6382f41 : nop
        xor eax, eax
        public_6382f43 : nop
        cmp dword ptr ds : [edx], eax
        jne public_6382f56
        mov eax, ecx
        dec ecx
        sub esi, 8
        sub edx, 4
        test eax, eax
        jne public_6382f2b
        jmp public_6382f5e
        public_6382f56 : nop
        mov dword ptr ss : [esp+0x10], 1
        public_6382f5e : nop
        mov esi, dword ptr ss : [esp+0x14]
        public_6382f62 : nop
        mov ecx, dword ptr ds : [edi+0x48]
        cmp ecx, dword ptr ds : [public_658b8e0]
        je public_6382fc0
        mov eax, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x18]
        push edx
        push edi
        push eax
        call public_637fd60
        fld qword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        inc ecx
        mov dword ptr ds : [eax], ecx
        fcomp qword ptr ds : [ebx]
        fnstsw ax
        test ah, 0x41
        jne public_6382fc0
        test dword ptr ds : [edi+0x50], 0x10000
        je public_6382fae
        fld qword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_658b020]
        fnstsw ax
        test ah, 0x41
        jne public_6382fc0
        public_6382fae : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [eax], edi
        public_6382fc0 : nop
        mov edi, dword ptr ds : [edi+0x30]
        test edi, edi
        jne public_6382ebb
        public_6382fcb : nop
        mov ecx, dword ptr ds : [public_658b24c]
        lea edx, ds:[ecx*4]
        push edx
        push esi
        call public_6377fe0
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6382e70)
    }
}

#undef public_6382ebb
#undef public_6382ec0
#undef public_6382ee3
#undef public_6382efd
#undef public_6382eff
#undef public_6382f0d
#undef public_6382f2b
#undef public_6382f41
#undef public_6382f43
#undef public_6382f56
#undef public_6382f5e
#undef public_6382f62
#undef public_6382fae
#undef public_6382fc0
#undef public_6382fcb
