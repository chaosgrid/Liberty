#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cef116 _public_6cef116
#define public_6cef134 _public_6cef134
#define public_6cef141 _public_6cef141
#define public_6cef14e _public_6cef14e
#define public_6cef162 _public_6cef162
#define public_6cef165 _public_6cef165
#define public_6cef168 _public_6cef168
#define public_6cef173 _public_6cef173
#define public_6cef18c _public_6cef18c
#define public_6cef1af _public_6cef1af
#define public_6cef1b2 _public_6cef1b2

PROC_DECLARE(0x6cef0f0, internal_6cef0f0, public_6cef0f0);
extern "C" NAKED register_t __cdecl internal_6cef0f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ebx+4]
        push esi
        mov esi, ecx
        mov byte ptr ds : [esi+0x38], al
        mov cl, byte ptr ds : [ebx+5]
        mov eax, dword ptr ds : [esi+0x30]
        mov byte ptr ds : [esi+0x39], cl
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+0x3C], edx
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        push edi
        mov dl, 1
        je public_6cef173
        public_6cef116 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6cef134
        mov edx, ebx
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+0xC], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+0x10], edx
        xor dl, dl
        jmp public_6cef168
        public_6cef134 : nop
        mov al, byte ptr ds : [esi+0x38]
        test al, al
        jne public_6cef141
        mov al, byte ptr ds : [ecx+0xC]
        mov byte ptr ds : [esi+0x38], al
        public_6cef141 : nop
        mov al, byte ptr ds : [esi+0x39]
        test al, al
        jne public_6cef14e
        mov al, byte ptr ds : [ecx+0xD]
        mov byte ptr ds : [esi+0x39], al
        public_6cef14e : nop
        fld dword ptr ds : [esi+0x3C]
        fld dword ptr ds : [ecx+0x10]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6cef162
        fld dword ptr ds : [esi+0x3C]
        jmp public_6cef165
        public_6cef162 : nop
        fld dword ptr ds : [ecx+0x10]
        public_6cef165 : nop
        fstp dword ptr ds : [esi+0x3C]
        public_6cef168 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [esi+0x30]
        jne public_6cef116
        test dl, dl
        je public_6cef1b2
        public_6cef173 : nop
        mov edi, dword ptr ds : [esi+0x30]
        push ebp
        mov ebp, dword ptr ds : [edi+4]
        push 0x14
        call public_6d60012
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_6cef18c
        mov ebp, eax
        public_6cef18c : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop ebp
        je public_6cef1af
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        public_6cef1af : nop
        inc dword ptr ds : [esi+0x34]
        public_6cef1b2 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cef0f0)
    }
}

#undef public_6cef116
#undef public_6cef134
#undef public_6cef141
#undef public_6cef14e
#undef public_6cef162
#undef public_6cef165
#undef public_6cef168
#undef public_6cef173
#undef public_6cef18c
#undef public_6cef1af
#undef public_6cef1b2
