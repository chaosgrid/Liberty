#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);
CLANG_FORWARD_PROC_SYMBOL(public_6619e60);
CLANG_FORWARD_PROC_SYMBOL(public_661aa60);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6619ed2 _public_6619ed2
#define public_6619ee6 _public_6619ee6
#define public_6619eec _public_6619eec
#define public_6619efa _public_6619efa
#define public_6619f3b _public_6619f3b
#define public_6619f54 _public_6619f54
#define public_6619f67 _public_6619f67
#define public_6619f72 _public_6619f72
#define public_6619f75 _public_6619f75
#define public_6619f7a _public_6619f7a
#define public_6619fa3 _public_6619fa3
#define public_6619fbc _public_6619fbc
#define public_6619fcf _public_6619fcf
#define public_6619fd9 _public_6619fd9
#define public_6619ffc _public_6619ffc
#define public_661a014 _public_661a014
#define public_661a027 _public_661a027
#define public_661a034 _public_661a034
#define public_661a036 _public_661a036
#define public_661a03c _public_661a03c
#define public_661a065 _public_661a065
#define public_661a078 _public_661a078
#define public_661a083 _public_661a083
#define public_661a086 _public_661a086
#define public_661a088 _public_661a088
#define public_661a08b _public_661a08b
#define public_661a097 _public_661a097

PROC_DECLARE(0x6619e60, internal_6619e60, public_6619e60);
extern "C" NAKED register_t __cdecl internal_6619e60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x30
        mov esi, ecx
        call public_66281dc
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x2C], 0
        mov byte ptr ds : [ebx+0x2D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_661aa60
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6619ed2
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_6619ed2
        lea ecx, ds:[edi+0xC]
        push ecx
        mov ecx, ebp
        call public_6612b20
        test al, al
        jne public_6619ed2
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6619eec
        mov dword ptr ds : [eax+8], ebx
        jmp public_6619eec
        public_6619ed2 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6619ee6
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6619eec
        public_6619ee6 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6619eec
        mov dword ptr ds : [eax], ebx
        public_6619eec : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_661a097
        public_6619efa : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_661a097
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6619fd9
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6619f3b
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_661a08b
        public_6619f3b : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6619f7a
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6619f54
        mov dword ptr ds : [edx+4], eax
        public_6619f54 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6619f67
        mov dword ptr ds : [edx+4], ecx
        jmp public_6619f75
        public_6619f67 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6619f72
        mov dword ptr ds : [edx], ecx
        jmp public_6619f75
        public_6619f72 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6619f75 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6619f7a : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6619fa3
        mov dword ptr ds : [edi+4], ecx
        public_6619fa3 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6619fbc
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a088
        public_6619fbc : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6619fcf
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a088
        public_6619fcf : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a088
        public_6619fd9 : nop
        cmp byte ptr ds : [edx+0x2C], 0
        jne public_6619ffc
        mov byte ptr ds : [ecx+0x2C], 1
        mov byte ptr ds : [edx+0x2C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_661a08b
        public_6619ffc : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_661a03c
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_661a014
        mov dword ptr ds : [edx+4], eax
        public_661a014 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_661a027
        mov dword ptr ds : [edx+4], ecx
        jmp public_661a036
        public_661a027 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_661a034
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a036
        public_661a034 : nop
        mov dword ptr ds : [edx], ecx
        public_661a036 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_661a03c : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_661a065
        mov dword ptr ds : [edi+4], ecx
        public_661a065 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_661a078
        mov dword ptr ds : [edi+4], edx
        jmp public_661a086
        public_661a078 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_661a083
        mov dword ptr ds : [edi], edx
        jmp public_661a086
        public_661a083 : nop
        mov dword ptr ds : [edi+8], edx
        public_661a086 : nop
        mov dword ptr ds : [edx], ecx
        public_661a088 : nop
        mov dword ptr ds : [ecx+4], edx
        public_661a08b : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6619efa
        public_661a097 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x2C], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6619e60)
    }
}

#undef public_6619ed2
#undef public_6619ee6
#undef public_6619eec
#undef public_6619efa
#undef public_6619f3b
#undef public_6619f54
#undef public_6619f67
#undef public_6619f72
#undef public_6619f75
#undef public_6619f7a
#undef public_6619fa3
#undef public_6619fbc
#undef public_6619fcf
#undef public_6619fd9
#undef public_6619ffc
#undef public_661a014
#undef public_661a027
#undef public_661a034
#undef public_661a036
#undef public_661a03c
#undef public_661a065
#undef public_661a078
#undef public_661a083
#undef public_661a086
#undef public_661a088
#undef public_661a08b
#undef public_661a097
