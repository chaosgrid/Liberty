#include "Common-PCH.h"


#define public_632a047 _public_632a047
#define public_632a050 _public_632a050
#define public_632a054 _public_632a054
#define public_632a092 _public_632a092
#define public_632a096 _public_632a096
#define public_632a0a4 _public_632a0a4
#define public_632a0b2 _public_632a0b2
#define public_632a0b6 _public_632a0b6
#define public_632a0f8 _public_632a0f8
#define public_632a0fc _public_632a0fc
#define public_632a108 _public_632a108
#define public_632a10c _public_632a10c
#define public_632a116 _public_632a116
#define public_632a11e _public_632a11e
#define public_632a130 _public_632a130
#define public_632a149 _public_632a149
#define public_632a16d _public_632a16d
#define public_632a191 _public_632a191
#define public_632a195 _public_632a195
#define public_632a19b _public_632a19b
#define public_632a1ac _public_632a1ac
#define public_632a1b6 _public_632a1b6
#define public_632a1c1 _public_632a1c1

PROC_DECLARE(0x632a020, internal_632a020, public_632a020);
extern "C" NAKED register_t __cdecl internal_632a020()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+4]
        push ebx
        push ebp
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [ecx]
        push esi
        xor ebp, ebp
        push edi
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x10], ebp
        public_632a047 : nop
        xor ebx, ebx
        mov dword ptr ss : [esp+0x24], ebx
        lea ecx, ds:[ecx]
        public_632a050 : nop
        test ebp, ebp
        jne public_632a0b2
        public_632a054 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ecx+4]
        je public_632a0b2
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x68]
        test edi, edi
        je public_632a096
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_632a0a4
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_632a092
        mov ebp, dword ptr ds : [public_639914c]
        jmp public_632a0a4
        public_632a092 : nop
        mov ebp, edi
        jmp public_632a0a4
        public_632a096 : nop
        test eax, eax
        je public_632a0a4
        mov ecx, dword ptr ds : [eax+8]
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        public_632a0a4 : nop
        test ebp, ebp
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], eax
        je public_632a054
        public_632a0b2 : nop
        test ebx, ebx
        jne public_632a11e
        public_632a0b6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [ecx+4]
        je public_632a1c1
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x68]
        test edi, edi
        je public_632a0f8
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_632a0fc
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_632a108
        mov ebx, dword ptr ds : [public_639914c]
        jmp public_632a116
        public_632a0f8 : nop
        test eax, eax
        jne public_632a10c
        public_632a0fc : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        jmp public_632a0b6
        public_632a108 : nop
        mov ebx, edi
        jmp public_632a116
        public_632a10c : nop
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        public_632a116 : nop
        test ebx, ebx
        je public_632a1c1
        public_632a11e : nop
        test ebp, ebp
        je public_632a1b6
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jle public_632a195
        mov edi, edi
        public_632a130 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        jle public_632a191
        mov al, byte ptr ss : [esp+0x28]
        test al, al
        je public_632a149
        movzx esi, word ptr ss : [ebp]
        movzx ecx, word ptr ds : [ebx]
        jmp public_632a16d
        public_632a149 : nop
        mov edi, dword ptr ds : [public_6399268]
        xor edx, edx
        mov dx, word ptr ss : [ebp]
        push edx
        call edi
        xor esi, esi
        mov si, ax
        xor eax, eax
        mov ax, word ptr ds : [ebx]
        push eax
        call edi
        add esp, 8
        xor ecx, ecx
        mov cx, ax
        public_632a16d : nop
        sub esi, ecx
        test esi, esi
        jne public_632a1ac
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        add ebp, 2
        add ebx, 2
        dec eax
        dec edx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x24], edx
        jg public_632a130
        jmp public_632a195
        public_632a191 : nop
        test eax, eax
        jg public_632a19b
        public_632a195 : nop
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        public_632a19b : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jg public_632a050
        jmp public_632a047
        public_632a1ac : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_632a1b6 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0xC
        ret 
        public_632a1c1 : nop
        pop edi
        xor eax, eax
        pop esi
        test ebp, ebp
        pop ebp
        setne al
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x632a020)
    }
}

#undef public_632a047
#undef public_632a050
#undef public_632a054
#undef public_632a092
#undef public_632a096
#undef public_632a0a4
#undef public_632a0b2
#undef public_632a0b6
#undef public_632a0f8
#undef public_632a0fc
#undef public_632a108
#undef public_632a10c
#undef public_632a116
#undef public_632a11e
#undef public_632a130
#undef public_632a149
#undef public_632a16d
#undef public_632a191
#undef public_632a195
#undef public_632a19b
#undef public_632a1ac
#undef public_632a1b6
#undef public_632a1c1
