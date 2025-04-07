#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624f90);
CLANG_FORWARD_PROC_SYMBOL(public_66254b0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6624ffd _public_6624ffd
#define public_6625011 _public_6625011
#define public_6625017 _public_6625017
#define public_6625025 _public_6625025
#define public_6625066 _public_6625066
#define public_662507f _public_662507f
#define public_6625092 _public_6625092
#define public_662509d _public_662509d
#define public_66250a0 _public_66250a0
#define public_66250a5 _public_66250a5
#define public_66250ce _public_66250ce
#define public_66250e7 _public_66250e7
#define public_66250fa _public_66250fa
#define public_6625104 _public_6625104
#define public_6625127 _public_6625127
#define public_662513f _public_662513f
#define public_6625152 _public_6625152
#define public_662515f _public_662515f
#define public_6625161 _public_6625161
#define public_6625167 _public_6625167
#define public_6625190 _public_6625190
#define public_66251a3 _public_66251a3
#define public_66251ae _public_66251ae
#define public_66251b1 _public_66251b1
#define public_66251b3 _public_66251b3
#define public_66251b6 _public_66251b6
#define public_66251c2 _public_66251c2

PROC_DECLARE(0x6624f90, internal_6624f90, public_6624f90);
extern "C" NAKED register_t __cdecl internal_6624f90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_66281dc
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_66254b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6624ffd
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_6624ffd
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jb public_6624ffd
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6625017
        mov dword ptr ds : [eax+8], ebx
        jmp public_6625017
        public_6624ffd : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6625011
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6625017
        public_6625011 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6625017
        mov dword ptr ds : [eax], ebx
        public_6625017 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_66251c2
        public_6625025 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_66251c2
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6625104
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6625066
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_66251b6
        public_6625066 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_66250a5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_662507f
        mov dword ptr ds : [edx+4], eax
        public_662507f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6625092
        mov dword ptr ds : [edx+4], ecx
        jmp public_66250a0
        public_6625092 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_662509d
        mov dword ptr ds : [edx], ecx
        jmp public_66250a0
        public_662509d : nop
        mov dword ptr ds : [edx+8], ecx
        public_66250a0 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_66250a5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_66250ce
        mov dword ptr ds : [edi+4], ecx
        public_66250ce : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_66250e7
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_66251b3
        public_66250e7 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_66250fa
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_66251b3
        public_66250fa : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_66251b3
        public_6625104 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6625127
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_66251b6
        public_6625127 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6625167
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_662513f
        mov dword ptr ds : [edx+4], eax
        public_662513f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6625152
        mov dword ptr ds : [edx+4], ecx
        jmp public_6625161
        public_6625152 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_662515f
        mov dword ptr ds : [edx+8], ecx
        jmp public_6625161
        public_662515f : nop
        mov dword ptr ds : [edx], ecx
        public_6625161 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6625167 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6625190
        mov dword ptr ds : [edi+4], ecx
        public_6625190 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_66251a3
        mov dword ptr ds : [edi+4], edx
        jmp public_66251b1
        public_66251a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_66251ae
        mov dword ptr ds : [edi], edx
        jmp public_66251b1
        public_66251ae : nop
        mov dword ptr ds : [edi+8], edx
        public_66251b1 : nop
        mov dword ptr ds : [edx], ecx
        public_66251b3 : nop
        mov dword ptr ds : [ecx+4], edx
        public_66251b6 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6625025
        public_66251c2 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6624f90)
    }
}

#undef public_6624ffd
#undef public_6625011
#undef public_6625017
#undef public_6625025
#undef public_6625066
#undef public_662507f
#undef public_6625092
#undef public_662509d
#undef public_66250a0
#undef public_66250a5
#undef public_66250ce
#undef public_66250e7
#undef public_66250fa
#undef public_6625104
#undef public_6625127
#undef public_662513f
#undef public_6625152
#undef public_662515f
#undef public_6625161
#undef public_6625167
#undef public_6625190
#undef public_66251a3
#undef public_66251ae
#undef public_66251b1
#undef public_66251b3
#undef public_66251b6
#undef public_66251c2
