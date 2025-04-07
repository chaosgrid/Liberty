#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5ab0);
CLANG_FORWARD_PROC_SYMBOL(public_4f5c20);
CLANG_FORWARD_PROC_SYMBOL(public_4f6200);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf3d9);

#define public_4f622f _public_4f622f
#define public_4f6237 _public_4f6237
#define public_4f6248 _public_4f6248
#define public_4f625a _public_4f625a
#define public_4f6271 _public_4f6271
#define public_4f6279 _public_4f6279
#define public_4f6280 _public_4f6280
#define public_4f6290 _public_4f6290
#define public_4f62b1 _public_4f62b1
#define public_4f6307 _public_4f6307
#define public_4f6342 _public_4f6342
#define public_4f634b _public_4f634b
#define public_4f6360 _public_4f6360

PROC_DECLARE(0x4f6200, internal_4f6200, public_4f6200);
extern "C" NAKED register_t __cdecl internal_4f6200()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf3d9 @0x4f6202*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf3d9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        mov edx, ecx
        mov eax, dword ptr ds : [edx+0xC]
        push esi
        xor esi, esi
        cmp eax, esi
        push edi
        mov dword ptr ss : [esp+0x10], edx
        jne public_4f622f
        xor ecx, ecx
        jmp public_4f6237
        public_4f622f : nop
        mov ecx, dword ptr ds : [edx+0x10]
        sub ecx, eax
        sar ecx, 2
        public_4f6237 : nop
        xor eax, eax
        cmp ecx, esi
        jle public_4f6360
        mov edx, dword ptr ds : [edx+0xC]
        mov ebx, dword ptr ss : [esp+0x34]
        public_4f6248 : nop
        mov edi, dword ptr ds : [edx+eax*4]
        cmp dword ptr ds : [edi+0x10], ebx
        je public_4f625a
        inc eax
        cmp eax, ecx
        jl public_4f6248
        jmp public_4f6360
        public_4f625a : nop
        cmp eax, 0xFFFFFFFF
        je public_4f6360
        mov ebp, dword ptr ds : [edx+eax*4]
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        jne public_4f6271
        xor ebx, ebx
        jmp public_4f6279
        public_4f6271 : nop
        mov ebx, dword ptr ss : [ebp+8]
        sub ebx, eax
        sar ebx, 4
        public_4f6279 : nop
        cmp ebx, esi
        jle public_4f62b1
        xor edi, edi
        nop 
        public_4f6280 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [edi+eax+4]
        test eax, eax
        jne public_4f6290
        mov eax, dword ptr ds : [public_5c7078]
        public_4f6290 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_4f6360
        inc esi
        add edi, 0x10
        cmp esi, ebx
        jl public_4f6280
        xor esi, esi
        public_4f62b1 : nop
        mov dl, byte ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov esi, dword ptr ss : [esp+0x38]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], dl
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_4f6307
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_5c706c]
        public_4f6307 : nop
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        xor esi, esi
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x38], esi
        call public_4e5ab0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_4f634b
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_4f6342
        cmp cl, 0xFF
        je public_4f6342
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_4f634b
        public_4f6342 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_4f634b : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        call public_4f5c20
        public_4f6360 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x4f6200)
    }
}

#undef public_4f622f
#undef public_4f6237
#undef public_4f6248
#undef public_4f625a
#undef public_4f6271
#undef public_4f6279
#undef public_4f6280
#undef public_4f6290
#undef public_4f62b1
#undef public_4f6307
#undef public_4f6342
#undef public_4f634b
#undef public_4f6360
