#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f35400);
CLANG_FORWARD_PROC_SYMBOL(public_6f36d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f50760);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f35448 _public_6f35448
#define public_6f35463 _public_6f35463
#define public_6f35491 _public_6f35491
#define public_6f35499 _public_6f35499
#define public_6f354cb _public_6f354cb
#define public_6f354e0 _public_6f354e0
#define public_6f354eb _public_6f354eb
#define public_6f354ed _public_6f354ed
#define public_6f35510 _public_6f35510
#define public_6f3551b _public_6f3551b
#define public_6f3551f _public_6f3551f
#define public_6f35535 _public_6f35535

PROC_DECLARE(0x6f35400, internal_6f35400, public_6f35400);
extern "C" NAKED register_t __cdecl internal_6f35400()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        call public_6f50760
        mov ebp, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [ebp+4]
        mov ebx, eax
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push eax
        push eax
        mov dword ptr ss : [esp+0x20], ebx
        call public_6f6a640
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        push eax
        push esi
        mov ecx, ebp
        call public_6ea1490
        mov dword ptr ss : [ebp+8], esi
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x30], edi
        je public_6f35535
        public_6f35448 : nop
        push edi
        call public_6f50650
        mov esi, dword ptr ds : [eax+0x4C]
        mov ecx, dword ptr ds : [eax+0x50]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f3551f
/*FIXUP public_6f35463 : nop
        push offset public_6fd0830 @0x6f35463*/
  FIXUP public_6f35463 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push esi
        call public_6f32480
        mov ecx, dword ptr ss : [esp+0x34]
        add eax, 0x14
        push eax
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        call public_6f36d80
        mov ecx, dword ptr ds : [eax+4]
        xor edi, edi
        add esp, 0x14
        cmp ecx, edi
        jne public_6f35491
        xor eax, eax
        jmp public_6f35499
        public_6f35491 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        public_6f35499 : nop
        cmp eax, edi
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        setne bl
        call public_6fa8fe0
        add esp, 4
        test bl, bl
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        jne public_6f354cb
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x50]
        add esi, 4
        cmp esi, eax
        jne public_6f35463
        jmp public_6f3551b
        public_6f354cb : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        je public_6f354eb
        mov edx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [edx]
        nop 
        lea esp, ss:[esp]
        public_6f354e0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f354ed
        add eax, 4
        cmp eax, ecx
        jne public_6f354e0
        public_6f354eb : nop
        mov eax, ecx
        public_6f354ed : nop
        cmp eax, ecx
        jne public_6f3551b
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp+8]
        cmp eax, ecx
        je public_6f3551b
        mov edx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [edx]
        public_6f35510 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f3551b
        add eax, 4
        cmp eax, ecx
        jne public_6f35510
        public_6f3551b : nop
        mov edi, dword ptr ss : [esp+0x30]
        public_6f3551f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        add edi, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x30], edi
        jne public_6f35448
        public_6f35535 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f35400)
    }
}

#undef public_6f35448
#undef public_6f35463
#undef public_6f35491
#undef public_6f35499
#undef public_6f354cb
#undef public_6f354e0
#undef public_6f354eb
#undef public_6f354ed
#undef public_6f35510
#undef public_6f3551b
#undef public_6f3551f
#undef public_6f35535
