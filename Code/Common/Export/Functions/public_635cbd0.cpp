#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_635c2c0);
CLANG_FORWARD_PROC_SYMBOL(public_635cbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6369200);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63982bb);

#define public_635cc0f _public_635cc0f
#define public_635cc36 _public_635cc36
#define public_635cc4f _public_635cc4f
#define public_635cc5f _public_635cc5f
#define public_635cc6f _public_635cc6f
#define public_635ccc4 _public_635ccc4
#define public_635ccec _public_635ccec
#define public_635ccf6 _public_635ccf6
#define public_635cd21 _public_635cd21
#define public_635cd2b _public_635cd2b
#define public_635cd56 _public_635cd56
#define public_635cd6b _public_635cd6b
#define public_635cd7f _public_635cd7f

PROC_DECLARE(0x635cbd0, internal_635cbd0, public_635cbd0);
extern "C" NAKED register_t __cdecl internal_635cbd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63982bb @0x635cbd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63982bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, 0x28
        push edi
        mov dword ptr ss : [esp+0x18], esi
        jle public_635cc0f
        push eax
/*FIXUP push offset public_63ee580 @0x635cc01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee580
        call dword ptr ds : [public_6399284]
        add esp, 8
        public_635cc0f : nop
        mov edi, dword ptr ds : [esi+0x178]
        push 0x28
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x28], esi
        je public_635cc36
        mov ecx, eax
        call public_635c2c0
        mov esi, eax
        public_635cc36 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, eax
        and ecx, 0x80000001
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        jns public_635cc4f
        dec ecx
        or ecx, 0xFFFFFFFE
        inc ecx
        public_635cc4f : nop
        mov ebx, dword ptr ds : [edi+4]
        and ebx, 0x80000001
        jns public_635cc5f
        dec ebx
        or ebx, 0xFFFFFFFE
        inc ebx
        public_635cc5f : nop
        mov ebp, dword ptr ds : [edi+8]
        and ebp, 0x80000001
        jns public_635cc6f
        dec ebp
        or ebp, 0xFFFFFFFE
        inc ebp
        public_635cc6f : nop
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [edi+4]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [edi+8]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ds : [esi+8], eax
        mov edx, dword ptr ds : [edi+0xC]
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        inc eax
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+edx*4+0xA0]
        mov edx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [edx+0xC]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+edx*4+0xA0]
        fstp dword ptr ss : [esp+0x10]
        jne public_635ccc4
        dec dword ptr ds : [esi]
        jmp public_635ccec
        public_635ccc4 : nop
        test ecx, ecx
        jne public_635ccec
        mov eax, dword ptr ss : [esp+0x30]
        fild dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x1C], ecx
        fmul dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x14]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_635ccec
        dec ecx
        mov dword ptr ds : [esi], ecx
        public_635ccec : nop
        cmp ebx, 0xFFFFFFFF
        jne public_635ccf6
        dec dword ptr ds : [esi+4]
        jmp public_635cd21
        public_635ccf6 : nop
        test ebx, ebx
        jne public_635cd21
        mov edx, dword ptr ss : [esp+0x30]
        fild dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x1C], ecx
        fmul dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x14]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_635cd21
        dec ecx
        mov dword ptr ds : [esi+4], ecx
        public_635cd21 : nop
        cmp ebp, 0xFFFFFFFF
        jne public_635cd2b
        dec dword ptr ds : [esi+8]
        jmp public_635cd56
        public_635cd2b : nop
        test ebp, ebp
        jne public_635cd56
        mov eax, dword ptr ss : [esp+0x30]
        fild dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x1C], ecx
        fmul dword ptr ss : [esp+0x10]
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x14]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_635cd56
        dec ecx
        mov dword ptr ds : [esi+8], ecx
        public_635cd56 : nop
        cmp word ptr ds : [esi+0x1A], 0x1B
        jb public_635cd6b
/*FIXUP push offset public_63ee538 @0x635cd5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee538
        call dword ptr ds : [public_6399284]
        add esp, 4
        public_635cd6b : nop
        mov cx, word ptr ds : [esi+0x1A]
        cmp cx, word ptr ds : [esi+0x18]
        lea ebx, ds:[esi+0x18]
        jb public_635cd7f
        mov ecx, ebx
        call public_63441a0
        public_635cd7f : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x18]
        xor edx, edx
        mov dx, word ptr ds : [ebx+2]
        push esi
        mov dword ptr ds : [eax+edx*4], edi
        inc word ptr ds : [ebx+2]
        mov dword ptr ds : [edi+0x14], esi
        mov edi, dword ptr ds : [ecx+0x170]
        mov ecx, edi
        call public_6369200
        push eax
        push esi
        mov ecx, edi
        call public_63523d0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        mov dword ptr ds : [edx+0x178], esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x635cbd0)
    }
}

#undef public_635cc0f
#undef public_635cc36
#undef public_635cc4f
#undef public_635cc5f
#undef public_635cc6f
#undef public_635ccc4
#undef public_635ccec
#undef public_635ccf6
#undef public_635cd21
#undef public_635cd2b
#undef public_635cd56
#undef public_635cd6b
#undef public_635cd7f
